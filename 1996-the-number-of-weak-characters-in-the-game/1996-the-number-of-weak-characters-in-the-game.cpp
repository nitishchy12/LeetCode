class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end() , [](auto& a, auto& b){
            if(a[0]!=b[0])
            return a[0]>b[0];

            return a[1]<b[1];
        });
        int maxdef=0;
        int weak=0;
        for(auto& p:properties){
            if(p[1]<maxdef){
                weak++;
            }
            maxdef=max(maxdef,p[1]);
        }
        return weak;
    }
};