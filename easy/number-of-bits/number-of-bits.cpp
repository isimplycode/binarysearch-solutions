int solve(int n) {
    int res=0;
    while (n) {
        res+=n%2;
        n/=2;
    }
    return res;
}
/* alternate solution
int solve(int n) {
    return __builtin_popcount(n);
}
*/
