class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int zeros=0,idx=-1;
        int prod=1;
        for(int i=0;i<n;i++){
           if(nums[i]==0){
            zeros++;
            idx=i;
           }
            else{
                prod*=nums[i];
            }
        }
        vector<int>res(n,0);
        if(zeros==0){
            for(int i=0;i<n;i++){
                res[i]=prod/nums[i];
            }
        }
        else if(zeros==1){
            res[idx]=prod;
        }
        return res;
    }
};