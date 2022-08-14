bool solve(vector<int> &nums) {
    int mx=0;
    for (int i=0; i<size(nums); ++i) {
        if (mx<i) return false;
        mx=max(mx,nums[i]+i);
        if (mx>size(nums)-1) {
            return true;
        }
    }
    return true;
}
