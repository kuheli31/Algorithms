//Maximum Sum of Subarray in an array.
#include <iostream>
#include <climits>
using namespace std;

int maxSumSubArray(int arr[], int n) {
    int maxSum = INT_MIN; // Initialize to the smallest possible integer
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {5, -4, -2, 6, -1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int kadane = maxSumSubArray(arr, n);
    cout << "Maximum Sum of Subarray: " << kadane << endl;
    return 0;
}


//Output:6
//Time complexity: O(n)