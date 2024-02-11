#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums.size();
        }

        int result = 1;
        int temp = 1;
        std::sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                // Skip duplicate elements
                continue;
            }

            if (nums[i] == nums[i - 1] + 1) {
                temp++;
            } else {
                temp = 1;
            }

            result = std::max(temp, result);
        }

        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums1 = {100, 4, 200, 1, 3, 2};
    std::vector<int> nums2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    int result1 = solution.longestConsecutive(nums1);
    int result2 = solution.longestConsecutive(nums2);

    std::cout << "Output 1: " << result1 << std::endl; // Output: 4
    std::cout << "Output 2: " << result2 << std::endl; // Output: 9

    return 0;
}
/*int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

}*/