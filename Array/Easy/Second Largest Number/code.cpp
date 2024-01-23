#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> 

using namespace std;

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
    // Write your code here.
    int secondLargest = INT_MIN;
    int SecondSmallest = INT_MAX;
    vector<int> vcc;
    vector<int> vcc2;
    sort(a.begin(), a.end());
    for(int i=0; i<n-1 ; i++){
        if (a[i]!=a[i+1]){
            vcc.push_back(a[i]);
        }
    }
    secondLargest = max(secondLargest, vcc[vcc.size()-1]);
    SecondSmallest = min(SecondSmallest, vcc[1]);
    vcc2.push_back(secondLargest);
    vcc2.push_back(SecondSmallest);
    return vcc2;
}

int main() {
    // Example usage
    std::vector<int> a = {1, 1, 2, 3, 3};
    
    // Call the function and get the results
    std::vector<int> result = getSecondOrderElements(a.size(), a);
    
    // Check if the result is not empty before printing
    if (!result.empty()) {
        std::cout << "Second Largest: " << result[0] << std::endl;
        std::cout << "Second Smallest: " << result[1] << std::endl;
    } else {
        std::cout << "Not enough unique elements in the array." << std::endl;
    }

    return 0;
}