class Solution {
    static const int CHAR=256;
public:
    int firstUniqChar(string s) {
        int n=s.length();
        int count[CHAR]={0};
        for(int i=0;i<n;i++){
            count[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(count[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};