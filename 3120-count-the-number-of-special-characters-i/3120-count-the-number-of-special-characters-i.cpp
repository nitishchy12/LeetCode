class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>s;
        int res=0;
        for(char c:word){
            if(islower(c) && !(s).count(c)){
                 char u=toupper(c);
                 if(word.find(u)!=string::npos){
                    res++;
                    s.insert(c);
                 }
            }
        }
        return res;
    }
};