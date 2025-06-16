class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int> res;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto e:m){
            if(e.second>n/3){
                res.push_back(e.first);
            }
        }
        return res;
    }
};