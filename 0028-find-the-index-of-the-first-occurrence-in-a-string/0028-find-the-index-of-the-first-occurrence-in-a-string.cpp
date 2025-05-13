class Solution {
    void filllps(string & s,vector<int> &lps){
        int n=s.length();
        lps[0]=0;
        int len=0;
        int i=1;
        while(i<n){
            if(s[i]==s[len]){
                lps[i]=len+1;
                len++;
                i++;
            }
            else{
                if(len==0){
                    lps[i]=0;
                    i++;
                }
                else{
                    len=lps[len-1];
                }
            }
        }
    }
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        vector<int>lps(m);
        filllps(needle,lps);
        int i=0,j=0;
        while(i<n){
            if(needle[j]==haystack[i]){
                i++;
                j++;
            }
            if(j==m){
                return (i-j);
                j=lps[j-1];
            }
            else if(i<n && needle[j]!=haystack[i]){
                if(j==0){
                    i++;
                }
                else{
                    j=lps[j-1];
                }
            }
        }
        return -1;
    }
        };