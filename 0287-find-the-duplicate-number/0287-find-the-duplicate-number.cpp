class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<bool>vis(n+1,false);
        for(int i=0;i<n;i++){
            if(vis[nums[i]]){
                return nums[i];
            }
            vis[nums[i]]=true;
        }
        return -1;
    }
};