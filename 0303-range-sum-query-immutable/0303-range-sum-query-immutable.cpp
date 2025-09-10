class NumArray {
    vector<int>ps;
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        ps.resize(n);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return ps[right];
        }
        else{
            return ps[right]-ps[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */