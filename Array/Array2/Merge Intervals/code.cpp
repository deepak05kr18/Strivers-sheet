#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort the intervals based on starting points
        sort(intervals.begin(), intervals.end());

        // Step 2: Merge overlapping intervals
        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++) {
            if(result.back()[1] >= intervals[i][0]) {
                // Overlapping intervals, merge them
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            } else {
                // Non-overlapping interval, add it to the result
                result.push_back(intervals[i]);
            }
        }

        // Step 3: Return the final result
        return result;
    }
};

int main() {
    Solution solution;
    
    // Example usage
    vector<vector<int>> input1 = {{1, 4}, {0, 4}};
    vector<vector<int>> output1 = solution.merge(input1);
    
    // Displaying the result
    cout << "Input: ";
    for (auto interval : input1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    cout << "Output: ";
    for (auto interval : output1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
