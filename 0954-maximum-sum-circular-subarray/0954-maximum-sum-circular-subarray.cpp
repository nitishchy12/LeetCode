class Solution {
    int maxsubarraysum(vector<int>& arr){
        int n=arr.size();
        int res=arr[0];
        int maxending=arr[0];
        for(int i=1;i<n;i++){
            maxending=max(maxending+arr[i],arr[i]);
            res=max(res,maxending);
        }
        return res;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int max_sum=maxsubarraysum(nums);
        if(max_sum<0)
        return max_sum;

        int res=nums[0];
        int minending=nums[0];
        for(int i=1;i<n;i++){
            minending=min(minending+nums[i],nums[i]);
            res=min(res,minending);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return max(max_sum,sum-(res));
    }
};