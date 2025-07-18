class Solution {
public:
    long long minimumDifference(vector<int>& nums) {
        int m=nums.size();
        int n=m/3;
        vector<long long>minleft(m),maxright(m);
        priority_queue<int>maxheap;
        long long sum=0;
        for(int i=0;i<m;i++){
           sum+=nums[i];
           maxheap.push(nums[i]);

           if(maxheap.size()>n){
            sum -=maxheap.top();
            maxheap.pop();
           }
           
           if(i>=n-1){
            minleft[i]=sum;
           }
        }

        priority_queue<int, vector<int>, greater<int>>minheap;
        sum=0;
        for(int i=m-1;i>=0;i--){
            sum+=nums[i];
            minheap.push(nums[i]);
            
            if(minheap.size()>n){
                sum-=minheap.top();
                minheap.pop();
            }

            if(i<=m-n){
                maxright[i]=sum;
            }
        }

        long long res=LLONG_MAX;
        for(int i=n-1;i<m-n;i++){
            res=min(res,minleft[i]-maxright[i+1]);
        }
        return res;
    }
};