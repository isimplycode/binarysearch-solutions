int solve(int n) {
    int a=0,b=0,c=0;
    while (b<n) {
        if (c%2!=0) {
            b++;
            a+=c;
        }
        c++;
    }
    return a;
}
