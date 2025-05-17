class Solution {
    static const int CHAR=256;
public:
    int firstUniqChar(string s) {
        int n=s.length();
        int fI[CHAR];
        fill(fI,fI+CHAR,-1);
        for(int i=0;i<n;i++){
            if(fI[s[i]]==-1){
                fI[s[i]]=i;
            }
            else{
                fI[s[i]]=-2;
            }
        }

        int res=INT_MAX;
        for(int i=0;i<CHAR;i++){
            if(fI[i]>=0){
                res=min(res,fI[i]);
            }
        }
        return (res==INT_MAX)?-1:res;
    }
};