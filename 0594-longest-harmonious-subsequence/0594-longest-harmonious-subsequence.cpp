class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=0;
        int len=0;
        for(int i=0;i<n;i++){
             if(nums[i]-nums[j]>1){
                j++;
             }
             if(nums[i]-nums[j]==1){
                len=max(len,i-j+1);
             }
        }
        return len;
    }
};