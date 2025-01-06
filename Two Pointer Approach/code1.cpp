//Getting the index of the two pointers.
#include <iostream>
using namespace std;

pair<int, int> point(int arr[], int left, int right, int target) 
{
    int currentSum = 0;
    while (left < right) {
        currentSum = arr[left] + arr[right];
        if (currentSum == target) {
            return {left, right}; // Return indices as a pair
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {-1, -1}; // Return -1, -1 if no pair is found
}

int main() {
    int arr[] = {1, 2, 3, 5, 7, 10, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 15;

    pair<int, int> result = point(arr, 0, n - 1, target);
    if (result.first != -1) {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No pair found with the target sum." << endl;
    }

    return 0;
}

//Output: Indices: 3, 5
//Time complexity: O(n)