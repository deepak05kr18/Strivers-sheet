#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN;
        int temp = 0;

        for (int i = 0; i < nums.size(); i++) {
            temp = max(nums[i], temp + nums[i]);
            result = max(result, temp);
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> nums = {5, 4, -1, 7, 8};
    int maxSum = solution.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}
