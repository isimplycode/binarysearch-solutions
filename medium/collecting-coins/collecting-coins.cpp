int solve(vector<vector<int>>& matrix) {
    int dp[size(matrix)][size(matrix[0])];
    dp[0][0]=matrix[0][0];
    for (int i=0; i<size(matrix); ++i) {
        for (int j=0; j<size(matrix[0]); ++j) {
            if (i&&j) {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+matrix[i][j];
            }
            if (i&&!j) {
                dp[i][j]=dp[i-1][j]+matrix[i][j];
            }
            if (!i&&j) {
                dp[i][j]=dp[i][j-1]+matrix[i][j];
            }
        }
    }
    return dp[size(matrix)-1][size(matrix[0])-1];
}
