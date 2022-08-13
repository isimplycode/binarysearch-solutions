vector<int> solve(vector<int>& nums) {
    if (size(nums)==0) return {};
    if (size(nums)==1) return nums;
    if (size(nums)==2) return nums;
    int vis[size(nums)];
    for (int i=0; i<size(nums); ++i) {
        vis[i]=0;
    }
    for (int i=0; i<size(nums)-2; ++i) {
        if (vis[i]) continue;
        int temp=nums[i];
        nums[i]=nums[i+2];
        nums[i+2]=temp;
        vis[i]=1;
        vis[i+2]=1;
    }
    return nums;
}
