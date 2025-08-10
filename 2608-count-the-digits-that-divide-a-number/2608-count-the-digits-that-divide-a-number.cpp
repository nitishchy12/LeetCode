class Solution {
public:
    int countDigits(int num) {
        int orgnum=num;
        int res=0;
        while(num>0){
            int digit=num%10;
            if(orgnum%digit==0){
            res++;
        }
        num/=10;
        }
        return res;
    }
};