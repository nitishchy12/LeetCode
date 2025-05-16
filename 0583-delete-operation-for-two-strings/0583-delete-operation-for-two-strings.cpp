class Solution {
    int LCS(string &s1,string &s2){
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=m;j++){
            dp[0][j]=0;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
public:
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int k=LCS(word1,word2);
        return (n-k)+(m-k);
    }
};