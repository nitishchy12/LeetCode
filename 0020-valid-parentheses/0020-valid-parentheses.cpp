class Solution {
    bool ismatching(char a,char b){
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
                
    }
public:
    bool isValid(string s) {
        stack<char>st;
        for(char x:s){
            if(x=='(' || x=='{' || x=='[')
            st.push(x);
            else{
                if(st.empty())
                return false;
                if(ismatching(st.top(),x)==false)
                return false;
                else{
                    st.pop();
                }
            }
        }
        return (st.empty()==true);
    }
};