class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int row_min=m,row_max=-1;
        int col_min=n,col_max=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                   row_min=min(row_min,i);
                   row_max=max(row_max,i);
                   col_min=min(col_min,j);
                   col_max=max(col_max,j);
                }
            }
        }
        if(row_max==-1)
        return 0;
        int height=row_max-row_min+1;
        int width=col_max-col_min+1;
        return height*width;
    }
};