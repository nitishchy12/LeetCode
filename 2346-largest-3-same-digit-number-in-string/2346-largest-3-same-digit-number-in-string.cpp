class Solution {
public:
    string largestGoodInteger(string num) {
      int n=num.size();
      string res="";
      for(int i=0;i+2<n;i++){
        if(num[i]==num[i+1] && num[i+1]==num[i+2]){
            string count=num.substr(i,3);
            res=max(res,count);
        }
      }
      return res;
    }
};