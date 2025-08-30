class Solution {
    void reverse(vector<int>& arr,int low,int high){
        while(low<high){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0)
        return ;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};