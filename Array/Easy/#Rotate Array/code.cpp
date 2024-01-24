#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //int n= nums.size();
        //vector<int>vcc(n);
        //for(int i=0; i<n; i++){
        //    vcc[(i+k)%n] = nums[i];
        //}
        //nums = vcc;
         int n = nums.size();
        k = k % n; // To handle cases where k is larger than the size of the array

        reverse(nums.begin(), nums.end()); // Reverse the entire array
        reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse the remaining elements
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}