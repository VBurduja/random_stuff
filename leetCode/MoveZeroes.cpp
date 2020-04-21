// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of 
// the non-zero elements.
// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
        int s = nums.size();
        int c = 0;
        vector<int>::iterator it;
        
        while (n != s){
            if (nums[n] == 0){
                nums.erase(nums.begin()+n);
                c++;
                n--;
                s--;
            }
            n++;
        }
        for (int i = 0; i < c; i++)
            nums.push_back(0);
        
    }
};