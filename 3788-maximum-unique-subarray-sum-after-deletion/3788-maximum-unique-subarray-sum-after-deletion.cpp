class Solution {
public:
    int maxSum(vector<int>& nums) {
         unordered_set<int>s;
        int maxval=INT_MIN;
        bool ispos=false;
        for(int n:nums){
            maxval=max(maxval,n);
            if(n>0){
                ispos=true;
                s.insert(n);
            }
        }
        if(!ispos){
            return maxval;
        }
        int sum=0;
        for(int x:s){
           sum+=x;
        }
        return sum;
    }
};