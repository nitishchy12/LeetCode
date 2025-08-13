class Solution {
public:
    bool isPalindrome(long x) {
         long rev=0;
         long temp=x;
        while(temp > 0){
           int lastdigit=temp%10;
           rev=rev*10+lastdigit;
           temp/=10;
        }
        return (rev==x);
    }
};