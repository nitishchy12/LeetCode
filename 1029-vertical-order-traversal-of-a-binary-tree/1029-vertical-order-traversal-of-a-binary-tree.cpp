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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode* ,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* curr=p.first;
            int row=p.second.first;
            int col=p.second.second;
            mp[col][row].insert(curr->val);
            if(curr->left!=nullptr){
                q.push({curr->left,{row+1,col-1}});
            }
            if(curr->right!=nullptr){
                q.push({curr->right,{row+1,col+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto& [col,m]:mp){
            vector<int>v;
            for(auto& [row,p]:m){
                v.insert(v.end(),p.begin(),p.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};