class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>sum(n,0);
        vector<int>xsum(n,0);
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int val=0;
                if(grid[i][j]=='X'){
                    val=1;
                }
                else if(grid[i][j]=='Y'){
                    val=-1;
                }
              sum[j]+=val;
              if(grid[i][j]=='X')
              xsum[j]++;
            }

            int currsum=0;
            int currx=0;
            for(int j=0;j<n;j++){
                currsum+=sum[j];
                currx+=xsum[j];

                if(currsum==0 && currx>0){
                    res++;
                }
            }
        }
        return res;
    }
};