class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            dp[i][0]=mat[i][0];
        }
        for(int j=1;j<n;j++){
            dp[0][j]=mat[0][j];
        }
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][j]==1){
                 dp[i][j]=1+dp[i][j-1];
                }
            }
        }
        
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0)
                continue;
                int minwidth=dp[i][j];
                for(int k=i;k>=0;k--){
                    if(mat[k][j]==0)
                    break;
                    minwidth=min(minwidth,dp[k][j]);
                    res+=minwidth;
                }
            }
        }
        return res;
    }
};