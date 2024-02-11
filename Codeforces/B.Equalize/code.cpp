#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int maxi = 0;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int> permutation(n);
        for (int i = 0; i < n; ++i) {
            permutation[i] = i + 1;
        }

        do {
            vector<int> array2(n);
            for (int i = 0; i < n; ++i) {
                array2[i] = a[i] + permutation[i];
            }

            map<int, int> mpp;
            for (int i = 0; i < n; ++i) {
                mpp[array2[i]]++;
            }

            for (auto it : mpp) {
                maxi = max(it.second, maxi);
            }
        } while (next_permutation(permutation.begin(), permutation.end()));

        cout << maxi << endl;
    }
    return 0;
}
