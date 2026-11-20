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
    void helper(TreeNode *root, string s, vector<string> &vec){
        if(!root) return;
        s += to_string(root->val);
        if(!root->left && !root->right){
            vec.push_back(s);
            return;
        } 
        helper(root->left, s + "->", vec);
        helper(root->right, s + "->", vec);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        vector<string> res;
        helper(root, s, res);
        return res;
    }
};