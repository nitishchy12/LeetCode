class Solution {
    void permute(vector<vector<int>>& res,vector<int>& arr,int l,int r){
        if(l==r){
            res.push_back(arr);
            return ;
        }
        unordered_set<int>s;
        for(int i=l;i<=r;i++){
            if(s.find(arr[i])!=s.end())
            continue;
            s.insert(arr[i]);
            swap(arr[i],arr[l]);
            permute(res,arr,l+1,r);
            swap(arr[i],arr[l]);
    }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        permute(res,nums,0,n-1);
        return res;
    }
};