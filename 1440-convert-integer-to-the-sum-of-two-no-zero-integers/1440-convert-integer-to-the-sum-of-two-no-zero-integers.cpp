class Solution {
    bool haszero(int x){
        while(x>0){
            if(x%10==0)
            return true;
            x/=10;
        }
        return false;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res;
        for(int a=1;a<n;a++){
            int b=n-a;
            if(!haszero(a) && !haszero(b)){
                res.push_back(a);
                res.push_back(b);
                break;
            }
        }
        return res;
    }
};