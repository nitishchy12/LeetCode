class Solution {
public:
    int minElement(vector<int>& nums) {
        int minVal=INT_MAX;
        for(int x:nums){
            int ds=0;
            while(x>0){
                ds+=x%10;
                x/=10;
            }
            minVal=min(minVal,ds);
        }
        return minVal;
    }
};