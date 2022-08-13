string solve(string s0, string s1) {
    int l=0,r=0;
    string res;
    while (l<size(s0)&&r<size(s1)) {
        res+=s0[l];
        res+=s1[r];
        l++;
        r++;
    }
    if (l==size(s0)&&r!=size(s1)) {
        while (r<size(s1)) {
            res+=s1[r];
            r++;
        }
    }
    if (r==size(s1)&&l!=size(s0)) {
        while (l<size(s0)) {
            res+=s0[l];
            l++;
        }
    }
    return res;
}
