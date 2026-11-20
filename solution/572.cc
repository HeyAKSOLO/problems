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
    bool helper(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2) return true;
        else if(!r1 || !r2) return false;
        return r1->val == r2->val && helper(r1->left, r2->left) && helper(r1->right, r2->right);
    }
    // bool preorder(TreeNode* r1, TreeNode* r2){
    // }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool hasfound = false;
        if(root->val == subRoot->val){
            hasfound = helper(root, subRoot);
        }
        bool r1 = false;
        bool r2 = false;
        if(root->left)  r1 = isSubtree(root->left, subRoot);
        if(root->right) r2 = isSubtree(root->right, subRoot);
        return r1 || r2 || hasfound;
    }
};