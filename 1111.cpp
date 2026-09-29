#include <iostream>
#include <vector>
using namespace std;
bool consecutiveOnes(vector<int>& nums){
    bool foundOne=false;
    bool ended=false;
    for (const auto& num: nums){
        if (num==1){
            if (ended) return false;
            foundOne=true;
        } else if (foundOne){
            ended=true;
        }
    }
    return true;
}