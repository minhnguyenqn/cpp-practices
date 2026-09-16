#include <iostream>
using namespace std;

int rometoint(string str){
    int res=0;
    vector<pair<string, int>> pairs = {
        {"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}
    };

    for (auto& [pattern, value] : pairs) {
      size_t pos= str.find(pattern);
      while(pos!=string::npos){
        res+=value;
        str.erase(pos,2);    
        }
    }
    for (char c : str) {
            switch (c) {
                case 'M': res += 1000; break;
                case 'D': res += 500; break;
                case 'C': res += 100; break;
                case 'L': res += 50; break;
                case 'X': res += 10; break;
                case 'V': res += 5; break;
                case 'I': res += 1; break;
            }
        }
        return res;
}