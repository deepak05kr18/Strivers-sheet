#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::map<int, int> mpp;
        int result = INT_MIN;
        
        // Count occurrences of each element in the array
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        
        // Find the element with the maximum count
        for (auto it : mpp) {
            result = std::max(result, it.second);
        }
        
        // Find the element with the maximum count again and return it
        for (auto it : mpp) {
            if (result == it.second) {
                return it.first;
            }
        }
        
        // If the array is empty or no majority element is found, return a default value
        return -1; // You can use any default value here based on your requirement
    }
};

int main() {
    // Example usage
    Solution solution;
    std::vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int result = solution.majorityElement(nums);
    
    if (result != -1) {
        std::cout << "Majority Element: " << result << std::endl;
    } else {
        std::cout << "No majority element found." << std::endl;
    }

    return 0;
}
