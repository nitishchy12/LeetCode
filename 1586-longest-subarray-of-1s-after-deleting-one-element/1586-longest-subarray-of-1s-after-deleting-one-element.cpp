class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,k=1;
        for(j=0;j<n;j++){
            if(nums[j]==0)
            k--;

            if(k<0 && nums[i++]==0){
                k++;
            }
        }
        return j-i-1;
    }
};