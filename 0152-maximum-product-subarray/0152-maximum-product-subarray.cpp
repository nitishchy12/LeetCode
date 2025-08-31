class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        int maxending=nums[0];
        int minending=nums[0];
        for(int i=1;i<n;i++){
           if(nums[i]<0){
           swap(maxending,minending);
           }
            maxending=max(maxending*nums[i],nums[i]);
            minending=min(minending*nums[i],nums[i]);
            res=max(res,max(maxending,minending));
    }
    return res;
    }
};