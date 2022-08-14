int solve(vector<int>& nums) {
    set<int> s;
    for (int i=0; i<size(nums); ++i) {
        if (s.find(nums[i])!=s.end()) {
            return nums[i];
        }
        s.insert(nums[i]);
    }
    return -1;
}
