string solve(string s) {
    int n=s.length();
    string res;
    for (int i=0; i<n; i++) {
        int count=1;
        while (i<n-1&&s[i]==s[i+1]) {
            count++;
            i++;
        }
        res+=to_string(count)+s[i];
    }
    return res;
}
