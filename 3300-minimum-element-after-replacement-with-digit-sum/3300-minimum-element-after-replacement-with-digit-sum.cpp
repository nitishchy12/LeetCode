class Solution {
public:
    int digitsum(int n){
          int sum=0;
          while(n>0){
            sum+=n%10;
            n/=10;
          }
          return sum;
    }

    int minElement(vector<int>& nums) {
        int minVal=INT_MAX;
        for(int x:nums){
            minVal=min(minVal,digitsum(x));
        }
        return minVal;
    }
};