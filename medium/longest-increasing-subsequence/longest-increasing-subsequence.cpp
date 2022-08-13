int solve(vector<int>& nums) {
    int dp[size(nums)];
    for (int i=0; i<size(nums); ++i) {
        dp[i]=1;
    }
    for (int i=0; i<size(nums); ++i) {
        for (int j=0; j<i; ++j) {
            if (nums[j]<nums[i]) {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int res=0;
    for (int i=0; i<size(nums); ++i) {
        res=max(res,dp[i]);
    }
    return res;
}
