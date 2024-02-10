#include <vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int countPaths(int i, int j, int n, int m, std::vector<std::vector<int>>& dp) {
        if (i == (n - 1) && j == (m - 1)) return 1;
        if (i >= n || j >= m) return 0;
        else if (dp[i][j] > 0) {
            return dp[i][j];
        } else {
            dp[i][j] = countPaths(i + 1, j, n, m, dp) + countPaths(i, j + 1, n, m, dp);
        }
        return dp[i][j];
    }

    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> dp(m, std::vector<int>(n, -1));
        return countPaths(0, 0, m, n, dp);
    }
};

int main() {
    Solution solution;
    int m = 3;
    int n = 7;
    int result = solution.uniquePaths(m, n);
    cout << "Number of unique paths: " << result << endl;

    return 0;
}
