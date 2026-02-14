class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int res=0;
        vector<int>ps(n),ns(n);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
               s.pop();
            }
             ps[i]=(s.empty())?-1:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            ns[i]=(s.empty())?n : s.top();
            s.push(i);
        }
        for(int i=0;i<n;i++){
            int curr=heights[i];
            curr+=(i-ps[i]-1)*heights[i];
            curr+=(ns[i]-i-1)*heights[i];
            res=max(curr,res);
        }
        return res;
    }
};