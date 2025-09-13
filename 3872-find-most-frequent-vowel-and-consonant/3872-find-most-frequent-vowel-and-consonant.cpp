class Solution {
    bool isvowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
public:
    int maxFreqSum(string s) {
        int n=s.size();
       unordered_map<char,int>m;
       for(char c:s){
            m[c]++;
        }
       int countV=0,countC=0;
       for(auto& p:m){
        if(isvowel(p.first)){
            countV=max(countV,p.second);
        }
        else{
            countC=max(countC,p.second);
        }
       }
       return countV+countC;
    }
};