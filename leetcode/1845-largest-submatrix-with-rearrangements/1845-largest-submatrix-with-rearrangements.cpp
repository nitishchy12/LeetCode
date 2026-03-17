class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int maxarea=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1 && i>0){
                    matrix[i][j]+=matrix[i-1][j];
                }
            }
        }
        
        for(int i=0;i<m;i++){
            vector<int>row= matrix[i];
            sort(row.begin(),row.end(), greater<int>());
            for(int j=0;j<n;j++){
            int height=row[j];
            int width=(j+1);
            int area=height*width;
            maxarea=max(maxarea,area);
        }
    }
    return maxarea;
    }
};