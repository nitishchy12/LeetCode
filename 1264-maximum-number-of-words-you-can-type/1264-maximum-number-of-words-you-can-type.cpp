class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>s(brokenLetters.begin(),brokenLetters.end());
        stringstream ss(text);
        string w;
        int count=0;
        while(ss>>w){
            bool flag=true;
            for(char c:w){
                if(s.count(c)){
                    flag=false;
                    break;
                }
            }
            if(flag)
            count++;
        }
        return count;
    }
};