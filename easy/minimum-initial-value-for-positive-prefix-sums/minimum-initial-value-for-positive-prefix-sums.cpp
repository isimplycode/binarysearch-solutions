int solve(vector<int>& nums) {
    vector<int> pfx(size(nums));
    int temp=0;
    for (int i=0; i<size(nums); ++i) {
        temp+=nums[i];
        pfx[i]=temp;
    }
    int mn=INT_MAX;
    for (int i=0; i<size(pfx); ++i) {
        mn=min(mn,pfx[i]);
    }
    if (mn==INT_MAX) return 1;
    if (mn<0)
        return abs(mn)+1;
    return 1;
}
