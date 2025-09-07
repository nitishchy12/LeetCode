class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0,count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[res]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                res=i;
                count=1;
            }
        }
        return nums[res];
    }
};