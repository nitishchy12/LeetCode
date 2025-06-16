class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string str="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else if(!str.empty()){
                st.push(str);
                str="";
            }
        }
        if(!str.empty()){
                st.push(str);
            }
           str="";
           while(!st.empty()){
            str+=st.top();
            st.pop();
            if(!st.empty()){
                str+=" ";
            }
           } 
           return str;
    }
};