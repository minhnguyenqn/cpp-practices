#include <iostream>
#include <vector>
using namespace std;

vector<int> updateArrayPerRange(vector<int>& nums, vector<vector<int>>& operations){
    for (const auto& op :operations){
        for (int j=op[0]; j<= op[1]; j++){
            nums[j]=nums[j]+op[2];
        }
    }
    return nums;
}
