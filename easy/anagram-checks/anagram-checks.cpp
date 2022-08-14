bool solve(string s0, string s1) {
    int a[26],b[26];
    fill(a,a+26,0);
    fill(b,b+26,0);
    if (size(s0)!=size(s1)) {
        return false;
    }
    for (int i=0; i<size(s0); ++i) {
        a[s0[i]-'a']++;
        b[s1[i]-'a']++;
    }
    for (int i=0; i<26; ++i) {
        if (a[i]!=b[i]) {
            return false;
        }
    }
    return true;
}
