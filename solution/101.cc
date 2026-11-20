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
    bool helper(TreeNode* l, TreeNode *r){
        if(!l && !r) return true;
        else if(!l || !r) return false;
        bool outer = helper(l->left, r->right);
        bool inner = helper(l->right, r->left);
        return l->val == r->val && outer && inner;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left, root->right);
    }
};