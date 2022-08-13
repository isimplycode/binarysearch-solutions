int solve(vector<vector<int>>& matrix) {
    int res=0,repeat=0;
    for(int i=0; i<size(matrix); ++i) {
        for(int j=0; j<size(matrix[0]); ++j) {
            if(matrix[i][j]==1) {
                res++;
                if(i!=0&&matrix[i-1][j]==1) repeat++;
                if(j!=0&&matrix[i][j-1]==1) repeat++;
            }
        }
    }
    return res*4-repeat*2;   
}
