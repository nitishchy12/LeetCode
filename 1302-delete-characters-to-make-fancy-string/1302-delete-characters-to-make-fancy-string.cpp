class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        if(n<3){
            return s;
        }
        string res="";
        res+=s[0];
        if(n>1){
            res+=s[1];
        }
        for(int i=2;i<n;i++){
            int m=res.length();
            if(s[i]!=res[m-1] || s[i]!=res[m-2]){
                res+=s[i];
            }
        }
        return res;
    }
};