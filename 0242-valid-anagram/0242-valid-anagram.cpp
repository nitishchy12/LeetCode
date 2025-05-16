class Solution {
    static const int CHAR=256;
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        int count[CHAR]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }

         for(int i=0;i<CHAR;i++){
            if(count[i]!=0){
                return false;
            }
         }
         return  true;
    }
};