#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            std::vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(row);
        }
        return ans;
    }
};

int main() {
    // Example usage
    Solution solution;
    int numRows = 50;
    vector<vector<int>> result = solution.generate(numRows);

    // Displaying the result
    for (const auto &row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
