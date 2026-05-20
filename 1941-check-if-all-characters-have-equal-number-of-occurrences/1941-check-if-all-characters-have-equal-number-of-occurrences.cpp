class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        int f=m.begin()->second;
        for(auto it:m){
            if(it.second !=f){
                return false;
            }
        }
        return true;
    }
};