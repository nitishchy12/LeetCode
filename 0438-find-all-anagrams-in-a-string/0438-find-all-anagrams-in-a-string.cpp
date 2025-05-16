class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<int>res;
        vector<int>CS(256,0);
        vector<int>CP(256,0);

        for(int i=0;i<m;i++){
            CS[s[i]]++;
            CP[p[i]]++;
        }

        for(int i=m;i<n;i++){
            if(CS==CP){
            res.push_back(i-m);
            }
           CS[s[i]]++;
           CS[s[i-m]]--; 
        }
        if(CS==CP){
            res.push_back(n-m);
        }
        return res;

    }
};