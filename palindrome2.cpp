#include <iostream>
using namespace std;
bool ispalindrome (int x){
    int reversehalf=0;              
    while (reversehalf<x){
        reversehalf=reversehalf*10+x%10;
        x=x/10;
    }
    return (reversehalf==x || reversehalf/10==x);
}
int main()
    {
        int x;
        cin>>x;    
    if (ispalindrome(x)){
            cout<<"true";}
    }