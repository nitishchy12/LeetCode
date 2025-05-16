class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int strd=matrix[i][j],ld=matrix[i][j],rd=matrix[i][j];
                strd+=dp[i-1][j];
                if(j>0){
                    ld+=dp[i-1][j-1];
                }
                else{
                    ld=INT_MAX;
                }
                if(j<n-1){
                    rd+=dp[i-1][j+1];
                }
                else{
                    rd=INT_MAX;
                }
                dp[i][j]=min(strd,min(ld,rd));
            }
        }
        int mini=INT_MAX;
        for(int j=0;j<n;j++){
            mini=min(mini,dp[n-1][j]);
        }
        return mini;
    }
};