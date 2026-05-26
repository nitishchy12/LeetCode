class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool s[128]={};
        for(char c:word){
            s[c]=true;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(s['a'+i] && s['A'+i]){
               count++;
            }
        }
        return count;
    }
};