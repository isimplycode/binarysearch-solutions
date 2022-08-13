int solve(vector<vector<int>>& matrix) {
    int res=0;
    for (int i=0; i<size(matrix); ++i)
        for (int j=0; j<size(matrix[0]);res+=matrix[i][j++])
            if (matrix[i][j]&&i&&j)
                matrix[i][j]+=min({matrix[i-1][j-1], matrix[i-1][j],matrix[i][j-1]});
    return res;
}
