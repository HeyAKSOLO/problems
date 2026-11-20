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

// my solution with array copy
class Solution {
public:
    void paths(TreeNode *root, int k, vector<int> vec, vector<vector<int>> &res){
        if(!root) return;

        if(!root->left && !root->right && root->val == k){
            vec.push_back(root->val);
            res.push_back(vec);
            return;
        }

        vec.push_back(root->val);
        paths(root->left, k - root->val, vec, res);
        paths(root->right, k - root->val, vec, res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> v1;
        paths(root, targetSum, v1, res);
        return res;
    }
};

// efficient backtracking soln with 1 vector
class Solution {
public:
    void paths(TreeNode* root, int k,
               vector<int>& vec,
               vector<vector<int>>& res) {

        if(!root) return;

        vec.push_back(root->val);

        if(!root->left && !root->right && root->val == k) {
            res.push_back(vec);
        }
        else {
            paths(root->left, k - root->val, vec, res);
            paths(root->right, k - root->val, vec, res);
        }

        vec.pop_back(); // use the same vector by removing the element from leaf
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> v1;

        paths(root, targetSum, v1, res);

        return res;
    }
};