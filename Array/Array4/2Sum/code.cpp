#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mpp.find(complement) != mpp.end()) {
                return {mpp[complement], i};
            }
            mpp[nums[i]] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution solution;
    
    // Example usage:
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (result[0] != -1) {
        cout << "Indices of the two numbers whose sum is equal to the target: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No such indices found." << endl;
    }

    return 0;
}
