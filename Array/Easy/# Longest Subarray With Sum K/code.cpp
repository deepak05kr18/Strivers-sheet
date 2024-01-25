#include <iostream>
#include <vector>

using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int ans = 0;
    int result = 0;

    for (int i = 0; i < a.size(); i++) {
        long long sum = 0;  // Variable to store the sum of the current subarray
        
        for (int j = i; j < a.size(); j++) {
            sum += a[j];

            if (sum == k) {
                // Update ans if the sum is equal to k
                ans = max(ans, j - i + 1);
            }
        }

        result = max(result, ans);
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    long long k = 3;
    
    int result = longestSubarrayWithSumK(a, k);
    
    cout << "Output: " << result << endl;

    return 0;
}
