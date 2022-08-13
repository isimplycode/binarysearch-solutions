int solve(vector<int>& nums, int k, int target) {
    int total=0;
    for (int i=0; i<size(nums); ++i) {
        total+=nums[i];
    }
    int res=0;
    if (total>target) {
        while (total>target) {
            total-=k;
            res++;
        }
    } else {
        while (total<target) {
            total+=k;
            res++;
        }
    }
    return res;
}
