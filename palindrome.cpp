#include <iostream>
using namespace std;
bool ispalindrome (int x){
   string s= to_string(x);
   int i=0;
   int j=s.length()-1;
   while (i<j){
       if (s[i]!=s[j]){
           return false;
       }
       i++;
       j--;
   }
   return true;
}
int main()
    {
        int x;
        cin>>x;
        if (ispalindrome(x)){
            cout<<"true";}
    }
