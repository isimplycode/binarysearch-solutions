int solve(string a, string b) {
    if (size(a)==0||size(b)==0) return 0;
    int dp[size(a)][size(b)];
    for (int i=0; i<size(a); ++i) {
        for (int j=0; j<size(b); ++j) {
            dp[i][j]=0;
        }
    }
    for (int i=0; i<size(a); i++) {
        if (a[i]==b[0]) {
            dp[i][0]=1;
        } 
        if (i>0) {
            dp[i][0]=max(dp[i][0],dp[i-1][0]);
        }
    }
    for (int i=0; i<size(b); ++i) {
        if (a[0]==b[i]) {
            dp[0][i]=1;
        }
        if (i>0) {
            dp[0][i]=max(dp[0][i],dp[0][i-1]);
        }
    }
    for (int i=1; i<size(a); ++i) {
        for (int j=1; j<size(b); ++j) {
            if (a[i]==b[j]) {
                dp[i][j]=dp[i-1][j-1]+1;
            } else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[size(a)-1][size(b)-1];
}
