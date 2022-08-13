int solve(vector<int>& nums) {
    unordered_map<int,int> m;
    for (int i=0; i<size(nums); ++i) {
        if (m.find(nums[i])!=m.end()) {
            m[nums[i]]++;
        } else {
            m[nums[i]]=1;
        }
    }
    for (auto i : m) {
        if (i.second==1) {
            return i.first;
        }
    }
    return -1;
}
