class Solution {
    static const int CHAR=256;
    bool areSame(int Cs1[],int Cs2[]){
        for(int i=0;i<CHAR;i++){
            if(Cs1[i]!=Cs2[i]){
                return false;
            }
        }
            return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        if(m>n)
        return false;

        int Cs2[CHAR]={0};
        int Cs1[CHAR]={0};
        for(int i=0;i<m;i++){
            Cs2[s2[i]]++;
            Cs1[s1[i]]++;
        }

        for(int i=m;i<n;i++){
            if(areSame(Cs1,Cs2)){
                return true;
            }
            Cs2[s2[i]]++;
            Cs2[s2[i-m]]--;
        }
        return areSame(Cs1, Cs2);
    }
};