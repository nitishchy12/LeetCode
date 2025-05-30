/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void preserialize(TreeNode* root,string& s){
        if(root==nullptr){
            s+="null ";
            return;
        }
        s+=to_string(root->val)+" ";
        preserialize(root->left,s);
        preserialize(root->right,s);
    }

    TreeNode* predeserialize(const vector<string>& str,int& index){
        if(index==str.size()){
            return nullptr;
        }
        string ele=str[index];
        index++;
        if(ele=="null"){
          return nullptr;
        }
        TreeNode* root=new TreeNode(stoi(ele));
        root->left=predeserialize(str, index);
        root->right=predeserialize(str,index);
        return root;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        preserialize(root,s);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
       vector<string>str;
       stringstream ss(data);
       string token;
       while(ss>>token){
        str.push_back(token);
       }
        int index=0;
        return predeserialize(str,index);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));