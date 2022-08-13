int solve(int n) {
    string s=to_string(n);
    vector<char> v;
    for (int i=0; i<size(s); ++i) {
        v.push_back(s[i]);
    }
    int found=0;
    for (int i=0; i<size(v); ++i) {
        if (v[i]!='3'&&!found) {
            found=1;
            v[i]='3';
        }
    }
    string t="";
    for (int i=0; i<size(v); ++i) {
        t+=v[i];
    }
    return stoi(t);
}
