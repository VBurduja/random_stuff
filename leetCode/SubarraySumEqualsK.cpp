// Given an array of integers and an integer k, you need 
// to find the total number of continuous subarrays whose
//  sum equals to k.

// Example 1:

// Input:nums = [1,1,1], k = 2
// Output: 2

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum1(vector<int>& nums, int k) {
        int s = 0;
        int r = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            s = 0;
            for (int j = i; j < nums.size(); j++) {
                s += nums[j];
                if ( s == k)
                    r++;
            }
        }
        return r;
    }

    int subarraySum2(vector<int>& nums, int k) {
        int s = 0;
        int r = 0;
        int n = nums.size();
        unordered_map<int, int> m; 
        
        m[0] = 1;
        
        for (int i = 0; i < n; i++) {
            s += nums[i];
            
            if (m.find(s - k) != m.end())
                r += m[s - k];
            if ( m.find(s) != m.end())
                m[s] =  m[s] + 1;
            else m[s] = 1;
        }
        
        return r;
    }
};