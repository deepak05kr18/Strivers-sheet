#include <iostream>
#include <vector>

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; 
        int n = nums.size();
        for(int i = 1; i < n; i++) {
            if(nums[i-1] > nums[i]) {
                count++;
            }
        }
        if(nums[n-1] > nums[0]) {
            count++;
        }
        return count <= 1;
    }
};

int main() {
    // Example usage
    vector<int> nums = {4, 2, 3};
    Solution solution;
    bool result = solution.check(nums);

    // Display the result
    if (result) {
        std::cout << "The array satisfies the given condition." << std::endl;
    } else {
        std::cout << "The array does not satisfy the given condition." << std::endl;
    }

    return 0;
}
