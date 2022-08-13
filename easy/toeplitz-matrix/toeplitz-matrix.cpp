bool solve(vector<vector<int>>& matrix) {
    for (int i=0; i<size(matrix); ++i) {
        for (int j=0; j<size(matrix[0]); ++j) {
            if (i>0) {
                if (j>0) {
                    if (matrix[i][j]!=matrix[i-1][j-1]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
