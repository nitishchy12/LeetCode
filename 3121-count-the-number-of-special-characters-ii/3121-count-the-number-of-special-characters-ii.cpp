class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int res=0;
        for(int c=0;c<26;c++){
            char l='a'+c;
            char u='A'+c;

            vector<int> lp,up;
            for(int i=0;i<n;i++){
                if(word[i]==l)
                lp.push_back(i);

                if(word[i]==u)
                up.push_back(i);
            }

            if(lp.empty() || up.empty())
            continue;

            if(lp.back()<up.front())
            res++;
        }
        return res;
    }
};