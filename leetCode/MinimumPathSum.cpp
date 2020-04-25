// Given a m x n grid filled with non-negative numbers,
//  find a path from top left to bottom right which minimizes
//   the sum of all numbers along its path.

// Note: You can only move either down or right at any point in time.

// Example:

// Input:
// [
//   [1,3,1],
//   [1,5,1],
//   [4,2,1]
// ]
// Output: 7
// Explanation: Because the path 1→3→1→1→1 minimizes the sum.


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp (n, vector<int>(m, INT_MAX));
        dp[0][0] = grid[0][0];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                int v = dp[i][j];
                
                if (i != n-1)
                    dp[i+1][j] = min(dp[i+1][j], v + grid[i+1][j]);
                
                if (j != m-1)
                    dp[i][j+1] = min(dp[i][j+1], v + grid[i][j+1]);
            }
        }

        return dp[n-1][m-1];
    }
};

