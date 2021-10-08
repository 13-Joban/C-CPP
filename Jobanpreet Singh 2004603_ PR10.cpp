
// we will see how to find a binary tree is balanced or not in c++ 
// this is optimal solution - having  Time - O(n) Space - O(n)(recursion) 
// solved using dfs 

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return Height (root) != -1;
    }
    int Height (TreeNode *root) {
        if (root == NULL) return 0;
        
        int leftHeight = Height (root -> left);
        if (leftHeight == -1) return -1;
        int rightHeight = Height (root -> right);
        if (rightHeight == -1) return -1;
        
        if (abs(leftHeight - rightHeight) > 1)  return -1;
        return max (leftHeight, rightHeight) + 1;
    }
};
