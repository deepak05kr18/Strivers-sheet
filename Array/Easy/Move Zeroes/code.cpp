#include <vector>
#include <queue>
 using namespace std;
class Solution {
public:
     void moveZeroes2(vector<int>& nums) {
        std:: queue<int> q1,q2, q3;
        for(int i=0; i<nums.size(); i++){
            q1.push(nums[i]);
        }
        while(!q1.empty()){
            if(q1.front()==0){
                int node = q1.front();
                q1.pop();
                q2.push(node);
            }
            else{
                int temp= q1.front();
                q1.pop();
                q3.push(temp);
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(!q3.empty()){
                nums[i]=q3.front();
                q3.pop();
            }
            else{
                nums[i]=q2.front();
                q2.pop();
            }
        }
    }

    void moveZeroes(std::vector<int>& nums) {
        int nonZeroIndex = 0;
        int n = nums.size();

        // Move non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[nonZeroIndex++] = nums[i];
            }
        }

        // Fill the remaining positions with zeros
        for (int i = nonZeroIndex; i < n; i++) {
            nums[i] = 0;
        }
    }
};

// Example usage:
#include <iostream>

int main() {
    Solution solution;

    // Example 1
    std::vector<int> nums1 = {0, 1, 0, 3, 12};
    solution.moveZeroes(nums1);
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Example 2
    std::vector<int> nums2 = {0};
    solution.moveZeroes(nums2);
    for (int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
