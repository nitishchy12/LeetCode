class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        set<pair<int,int>>s;
        for(int i=0;i<n;i++){
            s.insert({baskets[i],i});
        }
        int count=0;
        for(int i=0;i<n;i++){
           auto it= s.lower_bound({fruits[i],0});
           if(it!=s.end()){
            int bestidx=n;
            auto bestit=it;
            for(auto curr=it;curr!=s.end();curr++){
               if(curr->second <bestidx){
                bestidx=curr->second;
                bestit=curr;
               }
            }
            s.erase(bestit);
           }
           else
           count++;
        }
        return count;
    }
};