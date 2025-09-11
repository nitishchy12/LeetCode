class Solution {
    bool isvowel(char c){
        return c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
public:
    string reverseVowels(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){
            while(left<right && !isvowel(s[left])){
                left++;
            }
            while(left<right && !isvowel(s[right])){
                right--;
            }
            if(left<right){
              swap(s[left],s[right]);
              left++;
              right--;
            }
        }
        return s;
    }
};