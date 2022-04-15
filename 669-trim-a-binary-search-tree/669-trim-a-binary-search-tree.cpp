/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL) return NULL;
        if(root->val > high){
            return trimBST(root->left, low, high);
        }
        if(root->val < low){
            return trimBST(root->right, low, high);
        }
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
        
    }
    
};



// // root = [1,0,2], low = 1, high = 2

// // //  return tree in the range low to high 
// // // do in-order traversal  
// //     if(root->val > high){
// trimmed node is on the left side 
// }
// if(root->val < low){
// trim tree on right side
// }