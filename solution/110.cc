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

class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lefts = height(root->left);
        int rights = height(root->right);
        if(abs(lefts-rights) < 2 && (isBalanced(root->left) && isBalanced(root->right))) return true;
        return false;
    }
};

// efficient bottom up approach
class Solution {
public:
    int check(TreeNode* root) {

        // Base case
        if (!root) return 0;

        // Get left subtree height
        int l = check(root->left);
        if (l == -1) return -1;

        // Get right subtree height
        int r = check(root->right);
        if (r == -1) return -1;

        // Check current node balance
        if (abs(l - r) > 1) return -1;

        // Return current height
        return 1 + max(l, r);
    }

    bool isBalanced(TreeNode* root) {
        return check(root) != -1;
    }
};