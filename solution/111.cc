#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// my solution
class Solution {
public:
    int minDepth(TreeNode* root) {
        // edge case for 1 child nodes
        if(!root) return 0;
        int l = 0, r = 0;
        if(root->left && root->right){
            l = minDepth(root->left);
            r = minDepth(root->right);
            return 1 + min(l, r);
        }
        else if(root->left || root->right){
            l = minDepth(root->left);
            r = minDepth(root->right);
        }
        return 1 + l + r;
    }
};

// cleaner
class Solution2 {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        if (!root->left)
            return 1 + minDepth(root->right);

        if (!root->right)
            return 1 + minDepth(root->left);

        return 1 + min(minDepth(root->left),
                       minDepth(root->right));
    }
};