#include <iostream>
using namespace std;
bool ispalindrome (int x){
    int n=x;
    int m;
    while (n>0){
        int r=n%10;
        n=n/10;
        m=m*10+r;
    }
    if (m==x){
        return true;
    }
    else{
        return false;
    }
}
int main()
    {
        int x;
        cin>>x;
        if (ispalindrome(x)){
            cout<<"true";
    }

