int solve(string s) {
    int prev;
    if (size(s)==0) return 0;
    int count=1;
    int res=1;
    for (int i=0; i<size(s); ++i) {
        if (s[i]==prev) {
            count++;
            res=max(count,res);
        } else {
            prev=s[i];
            count=1;
        }
    }
    return res;
}
