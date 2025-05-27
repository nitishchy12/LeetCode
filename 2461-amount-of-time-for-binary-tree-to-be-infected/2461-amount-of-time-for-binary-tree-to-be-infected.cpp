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
    int burnTree(TreeNode* root,int start,int &dist,int &res){
       if(root==nullptr)
       return 0;
       if(root->val==start){
        dist=0;
        int lh = burnTree(root->left, start, dist, res);
        int rh = burnTree(root->right, start, dist, res);
        res = max(res, max(lh, rh));
        return 1;
       }
       int ldist=-1,rdist=-1;
       int lh=burnTree(root->left,start,ldist,res);
       int rh=burnTree(root->right,start,rdist,res);
       
       if(ldist!=-1){
        dist=ldist+1;
        res=max(res,dist+rh);
       }
       else if(rdist!=-1){
        dist=rdist+1;
        res=max(res,dist+lh);
       }
       return 1+max(lh,rh);
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        int res=0;
        int dist=-1;
        burnTree(root,start,dist,res);
        return res;
    }
};