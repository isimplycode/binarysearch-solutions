bool solve(vector<int>& nums) {
    bool val=true;
    for (int i=1; i<size(nums); ++i) {
        if (nums[i]<=nums[i-1]) {
            val=false;
        }
    }
    if (val) return true;
    val=true;
    for (int i=1; i<size(nums); ++i) {
        if (nums[i]>=nums[i-1]) {
            val=false;
        }
    }
    if (val) return true;
    return false;
}
