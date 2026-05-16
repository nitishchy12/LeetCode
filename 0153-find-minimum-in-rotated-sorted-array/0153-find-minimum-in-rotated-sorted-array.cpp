class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int minval=nums[0];
        for(int i=1;i<n;i++){
            minval=min(minval,nums[i]);
        }
        return minval;
    }
};