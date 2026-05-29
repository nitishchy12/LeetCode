class Solution {
public:
    int getLucky(string s, int k) {
        string numstr="";
        for(char c:s){
            numstr+=to_string(c-'a'+1);
        }
        int sum=0;
        for(char c:numstr){
            sum+=(c-'0');
        }
        for(int i=1;i<k;i++){
            int newsum=0;
            while(sum>0){
                newsum+=sum%10;
                sum/=10;
            }
            sum=newsum;
        }
        return sum;
    }
};