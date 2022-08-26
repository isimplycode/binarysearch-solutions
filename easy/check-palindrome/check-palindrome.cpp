bool solve(string s) {
    int i=0,j=size(s)-1;
    while (i<j) {
        if (s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
