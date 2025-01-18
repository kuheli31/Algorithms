# Moore's Voting Algorithm

Moore's Voting Algorithm is an efficient method to find the majority element in an array. The majority element is the element that appears more than ⌊n/2⌋ times, where \( n \) is the size of the array.

---

## Problem Statement

Given an array `nums` of size `n`, return the majority element. Assume that the majority element **always exists** in the input array.

### Examples:
1. **Input:** `nums = [3, 2, 3]`  
   **Output:** `3`
   
2. **Input:** `nums = [2, 2, 1, 1, 1, 2, 2]`  
   **Output:** `2`

---

## Algorithm Description

Moore's Voting Algorithm is based on the principle of pairing different elements to cancel them out. The algorithm works in two phases:

1. **Candidate Selection:**  
   Traverse the array while maintaining a candidate element and a count. If the count becomes 0, update the candidate to the current element and reset the count to 1. If the current element matches the candidate, increment the count; otherwise, decrement it.

2. **Verification (Optional):**  
   Although not required if the majority element is guaranteed, a second pass through the array can verify whether the candidate is indeed the majority element.

---

## Time and Space Complexity
- **Time Complexity:** \( O(n) \)  
  The array is traversed at most twice (once to find the candidate and optionally once to verify it).  
- **Space Complexity:** \( O(1) \)  
  No additional space is used apart from variables to store the candidate and count.

---

## Implementation

Here is a C++ implementation of Moore's Voting Algorithm:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0], count = 0;

        // Phase 1: Finding the Candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};
