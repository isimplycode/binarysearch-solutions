vector<int> solve(vector<int>& nums) {
    int msf=nums[0];
    nums[0]=0;
    for (int i=1; i<size(nums); ++i) {
        int temp=nums[i];
        nums[i]=msf;
        msf=min(msf,temp);
    }
    return nums;
}
