#include <iostream>
#include <vector>

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Use separate arrays to track which rows and columns need to be set to zero
        std::vector<int> zeroRows(rows, 0);
        std::vector<int> zeroCols(cols, 0);

        // Traverse the matrix and mark the rows and columns to be zeroed
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeroRows[i] = 1;
                    zeroCols[j] = 1;
                }
            }
        }

        // Set the entire row to zero if the corresponding zeroRows element is 1
        for (int i = 0; i < rows; i++) {
            if (zeroRows[i] == 1) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set the entire column to zero if the corresponding zeroCols element is 1
        for (int j = 0; j < cols; j++) {
            if (zeroCols[j] == 1) {
                for (int i = 0; i < rows; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    Solution solution;

    // Example usage
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    std::cout << "Original Matrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    solution.setZeroes(matrix);

    std::cout << "\nMatrix after setting zeroes:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
