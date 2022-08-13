bool solve(vector<int>& nums) {
    for (int i=0; i<size(nums); ++i) {
        if (2*i+1<size(nums)) {
            if (nums[i]<nums[2*i+1]) return false;
        }
        if (2*i+2<size(nums)) {
            if (nums[i]<nums[2*i+2]) return false;
        }
    }
    return true;
}
