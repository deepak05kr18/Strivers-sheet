#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Transpose the matrix
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){  // Only swap elements where i < j
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Flip each row horizontally
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n / 2; j++){
                swap(matrix[i][j], matrix[i][n - 1 - j]);
            }
        }
    }
};

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution solution;
    solution.rotate(matrix);

    // Print the rotated matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
