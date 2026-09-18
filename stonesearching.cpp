#include <iostream>
#include <cassert>
#include <math.h>
using namespace std;
long long k = 13; // giả sử viên đá nằm ở hành tinh 13

bool oracle(long long x) {
    return k > x;
}
long long findStone() {
   int i=0; 
   while (oracle(pow(2,i))){
    i++;
   }
   //[2^(i-1)+1 - 2^i]
   int low=pow(2,i-1)+1;
   int high=pow(2,i);
   while (low<high){
    int mid=low+(high-low)/2;
    if (oracle(mid)) low=mid+1; else high=mid;
   }
    return low;
}
int main() {
    cout << "k that: " << k << endl;
    cout << "Ket qua tim duoc: " << findStone() << endl;

    return 0;
}