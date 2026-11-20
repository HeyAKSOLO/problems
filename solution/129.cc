#include <bits/stdc++.h>
using namespace std;
f
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
    void helper(TreeNode *root, int &num, int &res){
        if(!root) return;

        num = num * 10 + root->val;
        if(!root->left && !root->right){
            res += num;
        }

        else{
            helper(root->left, num, res);
            helper(root->right, num, res);
        }

        num /= 10;
    }

    int sumNumbers(TreeNode* root) {
        int res = 0;
        int run_sum = 0;
        helper(root, run_sum, res);
        return res;
    }
};