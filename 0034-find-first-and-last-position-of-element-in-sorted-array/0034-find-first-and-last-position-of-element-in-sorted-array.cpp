class Solution {
    int firstocc(vector<int>& arr,int k){
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<k){
                low=mid+1;
            }
            else if(arr[mid]>k){
                high=mid-1;
            }
            else{
                if(mid==0 || arr[mid-1]!=arr[mid]){
                    return mid;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }

    int lastocc(vector<int>& Arr,int x){
        int n=Arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(Arr[mid]>x){
                high=mid-1;
            }
            else if(Arr[mid]<x){
                low=mid+1;
            }
            else{
                if(mid==n-1 || Arr[mid]!=Arr[mid+1]){
                    return mid;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       return {firstocc(nums,target),lastocc(nums,target)};
    }
};