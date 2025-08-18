class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        return 1;
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        double temp=myPow(x,N/2);
        if(N%2==0){
            return temp*temp;
        }
        else{
            return temp*temp*x;
        }
    }
};