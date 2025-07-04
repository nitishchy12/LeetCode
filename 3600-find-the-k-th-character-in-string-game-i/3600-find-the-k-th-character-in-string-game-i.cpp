class Solution {
public:
    char kthCharacter(int k) {
       std:: string s="a";
        while(s.length()<k){
            int n=s.length();
            for(int i=0;i<n;i++){
               char ch=('a')+((s[i]-'a'+1)%26);
               s+=ch;   
            }
        }
        return s[k-1];
    }
};