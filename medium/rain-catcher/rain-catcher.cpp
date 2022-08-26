int solve(vector<int>& nums) {
    int res=0;
    vector<int> lmx(size(nums)),rmx(size(nums));
    int temp=0;
    for (int i=0; i<size(nums); ++i) {
        lmx[i]=temp;
        temp=max(temp,nums[i]);
    }
    temp=0;
    for (int i=size(nums)-1; i>=0; --i) {
        rmx[i]=temp;
        temp=max(temp,nums[i]);
    }
    for (int i=0; i<size(nums); ++i) {
        int psbl=min(lmx[i],rmx[i])-nums[i];
        if (psbl>0) {
            res+=psbl;
        }
    }
    return res;
}
