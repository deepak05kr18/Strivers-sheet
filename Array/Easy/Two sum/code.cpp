#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);

    std::cout << "Output 1: [" << result1[0] << ", " << result1[1] << "]\n";

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);

    std::cout << "Output 2: [" << result2[0] << ", " << result2[1] << "]\n";

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);

    std::cout << "Output 3: [" << result3[0] << ", " << result3[1] << "]\n";

    return 0;
}


std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndexMap;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // Check if the complement is already in the map
        if (numIndexMap.find(complement) != numIndexMap.end()) {
            // Return the indices of the two numbers
            return {numIndexMap[complement], i};
        }

        // Add the current number and its index to the map
        numIndexMap[nums[i]] = i;
    }

    // No solution found
    return {};
}