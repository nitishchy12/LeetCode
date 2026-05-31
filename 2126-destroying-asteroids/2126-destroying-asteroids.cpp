class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long planet=mass;
        for(int a:asteroids){
            if(planet<a)
            return false;

            planet+=a;
        }
        return true;
    }
};