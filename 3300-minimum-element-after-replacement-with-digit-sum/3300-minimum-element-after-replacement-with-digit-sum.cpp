class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>sum;
        for(int x:nums){
            int ds=0;
            int n=x;

        while(n){
            ds+=n%10;
            n/=10;
        }
        sum.push_back(ds);
        }
        int res=*min_element(sum.begin(),sum.end());
        return res;
    }
};