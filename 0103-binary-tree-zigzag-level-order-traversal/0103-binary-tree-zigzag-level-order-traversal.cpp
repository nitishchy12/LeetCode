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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr){
            return res;
        }
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        s1.push(root);
        while(!s1.empty()|| !s2.empty()){
            vector<int>ans;
            while(!s1.empty()){
                TreeNode* curr1=s1.top();
                s1.pop();
                ans.push_back(curr1->val);
                if(curr1->left!=nullptr){
                    s2.push(curr1->left);
                }
                if(curr1->right!=nullptr){
                    s2.push(curr1->right);
                }
            }

            if (!ans.empty()) {
                res.push_back(ans);
            }
            ans.clear();

            while(!s2.empty()){
                TreeNode* curr2=s2.top();
                s2.pop();
                ans.push_back(curr2->val);
                if(curr2->right!=nullptr){
                    s1.push(curr2->right);
                }
                if(curr2->left!=nullptr){
                    s1.push(curr2->left);
                }
            }
             if (!ans.empty()) {
                res.push_back(ans);
            }

            ans.clear();
        }
        return res;
    }
};