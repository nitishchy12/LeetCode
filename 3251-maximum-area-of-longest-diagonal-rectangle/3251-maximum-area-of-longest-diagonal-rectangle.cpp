class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
         int n=dimensions.size();
         double maxdiag=0;
         int maxarea=0;
         for(int i=0;i<n;i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            double diag=sqrt(l*l+w*w);
            int area=l*w;
            if(diag>maxdiag){
               maxdiag=diag;
               maxarea=area;
            }
            else if(diag==maxdiag){
                maxarea=max(area,maxarea);
            }
         }
         return maxarea;
    }
};