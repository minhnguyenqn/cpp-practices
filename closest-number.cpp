/*Given two integers n and m (m != 0). Find the number closest to n and divisible by m. 
If there is more than one such number, then output the one having maximum absolute value.*/

#include <iostream>
#include <math.h>
#include <cassert>
using namespace std;

int closestnumber(int n, int m){
    int q=n/m;
    
    int n1=m*q;
    int n2=((n > 0 && m > 0) || (n < 0 && m < 0))?m*(q+1): m*(q-1);

    if (abs(n-n1)>abs(n-n2)) return n2; else if (abs(n-n1)<abs(n-n2)) return n1;
    if ((abs(n-n1)==abs(n-n2)) && (abs(n1)>abs(n2))) return n1; else return n2;

}
int main(){
    assert(closestnumber(13,4)==12);
    assert(closestnumber(-15,6)==-18);
    cout<<"ok";
    return 0;
}
