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
        queue<TreeNode* >q;
        stack<int>s;
        bool reverse=false;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int>ans;
            for(int i=0;i<count;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(reverse){
                    s.push(curr->val);
                }
                else{
                    ans.push_back(curr->val);
                }
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
            if(reverse){
                while(!s.empty()){
                    ans.push_back(s.top());
                    s.pop();
                }
            }
            res.push_back(ans);
            reverse=!reverse;
        }
        return res;
    }
};