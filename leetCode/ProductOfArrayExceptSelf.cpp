// Given an array nums of n integers where n > 1,  return an array 
// output such that output[i] is equal to the product of all 
// the elements of nums except nums[i].

// Example:

// Input:  [1,2,3,4]
// Output: [24,12,8,6]



#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> left(nums.size());
        vector<int> right(nums.size()); 
        vector<int> prod(nums.size());
  
        int i, j; 
        int n = nums.size();
        left[0] = 1; 
        right[n - 1] = 1; 
  
        for (i = 1; i < n; i++) 
            left[i] = nums[i - 1] * left[i - 1]; 
  
        for (j = n - 2; j >= 0; j--) 
            right[j] = nums[j + 1] * right[j + 1]; 
  
        for (i = 0; i < n; i++) 
            prod[i] = left[i] * right[i]; 
        return prod;
    }
};