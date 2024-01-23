#include <iostream>
#include <vector>
#include <climits>  // for INT_MIN

using namespace std;

int largestElement(vector<int> &arr, int n);

int main() {
    // Example usage:
    vector<int> numbers = {3, 1, 8, 5, 7};
    int size = numbers.size();

    int result = largestElement(numbers, size);

    cout << "The largest element in the vector is: " << result << endl;

    return 0;
}

int largestElement(vector<int> &arr, int n) {
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans = max(ans, arr[i]);
    }
    return ans;
}
