class Solution {
    void perint(vector<vector<int>>& res,vector<int>& arr,int l,int r){
        if(l==r){
          res.push_back(arr);
          return ;
        }
        else{
            for(int i=l;i<=r;i++){
                swap(arr[i],arr[l]);
                perint(res,arr,l+1,r);
                swap(arr[i],arr[l]);
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        perint(res,nums,0,n-1);
        return res;
    }
};