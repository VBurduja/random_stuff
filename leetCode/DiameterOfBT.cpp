//  Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary 
//  ree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// Example:
// Given a binary tree

//           1
//          / \
//         2   3
//        / \     
//       4   5    

// Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].

// Note: The length of path between two nodes is represented by the number of edges between them. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
    public:
    int ans;
    
    int diameterOfBinaryTree(TreeNode *root) {
        ans = 1;
        depth(root);
        return ans - 1;
    }
    
    int depth(TreeNode *node) {
        if (node == NULL) return 0;
        int L = depth(node->left);
        int R = depth(node->right);
        ans = max(ans, L+R+1);
        return max(L, R) + 1;
    }
};