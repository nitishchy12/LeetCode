class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<bool>seenA(n+1,false);
        vector<bool>seenB(n+1,false);
        vector<int>res(n);
        int count=0;
        for(int i=0;i<n;i++){
            if(seenB[A[i]])
            count++;
            if(seenA[B[i]])
            count++;
            if(A[i]==B[i])
            count++;

            seenA[A[i]]=true;
            seenB[B[i]]=true;
            res[i]=count;
        }
        return res;
    }
};