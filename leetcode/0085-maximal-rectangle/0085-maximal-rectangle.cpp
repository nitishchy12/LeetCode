class Solution {
    int largesthist(vector<int>& mat){
        int n=mat.size();
        int res=0;
        vector<int>ps(n),ns(n);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && mat[s.top()]>=mat[i]){
                s.pop();
            }
            ps[i]=(s.empty())?-1:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && mat[s.top()]>=mat[i]){
                s.pop();
            }
            ns[i]=(s.empty())?n:s.top();
            s.push(i);
        }
        for(int i=0;i<n;i++){
            int curr=mat[i];
            curr+=(i-ps[i]-1)*mat[i];
            curr+=(ns[i]-i-1)*mat[i];
            res=max(curr,res);
        }
        return res;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>heights(m,0);
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    heights[j]++;
                }
                else
                heights[j]=0;
            }
            res=max(res,largesthist(heights));
        }
        return res;
    }
};