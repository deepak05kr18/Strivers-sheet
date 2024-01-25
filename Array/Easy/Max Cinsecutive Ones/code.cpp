#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int ans = 0;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                ans++;
            } else {
                ans = 0;
            }
            result = std::max(result, ans);
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Example usage
    std::vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = solution.findMaxConsecutiveOnes(nums);

    // Output the result
    std::cout << "Maximum Consecutive Ones: " << maxConsecutiveOnes << std::endl;

    return 0;
}