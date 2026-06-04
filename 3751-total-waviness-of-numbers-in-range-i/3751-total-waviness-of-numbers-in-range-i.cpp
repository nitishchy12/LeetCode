class Solution {
public:
    int waviness(int num){
       string s=to_string(num);
       int n=s.size();
       if(n<3)
       return 0;
       
       int count=0;
       for(int i=1;i<n-1;i++){
        if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1]))
           count++;
       }
       return count;
    }

    int totalWaviness(int num1, int num2) {
        int sum=0;
        for(int n=num1;n<=num2;n++){
            sum+=waviness(n);
        }
        return sum;
    }
};