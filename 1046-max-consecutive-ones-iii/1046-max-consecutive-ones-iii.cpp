class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0,count=0;
        int start=0,end=0;
        while(end<n){
            if(nums[end]==0)
            count++;

            while(count>k){
                if(nums[start]==0){
                    count--;
                }
                start++;
            }
            res=max(res,(end-start+1));
            end++;
        }
        return res;
    }
};