class Solution {
public:
    int minElement(vector<int>& nums) {
        int minVal=INT_MAX;
        for(int x:nums){
            string s=to_string(x);
            int ds=0;
            for(char c:s){
                ds+=(c-'0');
            }
                minVal=min(minVal,ds);
            }
        return minVal;
    }
};