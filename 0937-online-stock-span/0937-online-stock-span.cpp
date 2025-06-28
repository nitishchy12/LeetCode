class StockSpanner {
    stack<pair<int,int>>s;
    int span=-1;
public:
    StockSpanner() {
        span=-1;
    }
    
    int next(int price) {
         span+=1;
        while(!s.empty() && s.top().first<=price){
            s.pop();
        }
        int ans=(s.empty())? span+1:span-s.top().second;
        s.push({price,span});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */