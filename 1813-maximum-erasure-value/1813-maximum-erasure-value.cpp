class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
       int l=0,r=0,sum=0,maxsum=0;
       while(r<n){
        if(s.find(nums[r])==s.end()){
            s.insert(nums[r]);
            sum+=nums[r];
            maxsum=max(sum,maxsum);
            r++;
        }
        else{
            s.erase(nums[l]);
            sum-=nums[l];
            l++;
        }
       }
     return maxsum;
    }
};