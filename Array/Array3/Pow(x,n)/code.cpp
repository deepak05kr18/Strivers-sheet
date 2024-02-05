#include <iostream>

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }

        if (n > 0) {
            return x * myPow(x, n - 1);
        } else {
            // Handle negative exponent by taking the reciprocal
            return 1.0 / (x * myPow(x, -(n + 1)));
        }
    }
};

int main() {
    Solution solution;

    // Test cases
    double base = 2.0;
    int exponent = 3;
    double result = solution.myPow(base, exponent);

    std::cout << base << " ^ " << exponent << " = " << result << std::endl;

    return 0;
}
