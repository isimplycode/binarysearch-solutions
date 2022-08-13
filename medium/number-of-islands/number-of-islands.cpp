int solve(vector<vector<int>>& matrix) {
    int res=0;
    int vis[size(matrix)][size(matrix[0])];
    for (int i=0; i<size(matrix); ++i) {
        for (int j=0; j<size(matrix[0]); ++j) {
            vis[i][j]=0;
        }
    }
    for (int i=0; i<size(matrix); ++i) {
        for (int j=0; j<size(matrix[0]); ++j) {
            if (matrix[i][j]==1&&!vis[i][j]) {
                res++;
                queue<pair<int,int>> q;
                q.push({i,j});
                int x,y;
                while (q.size()) {
                    y=q.front().first;
                    x=q.front().second;
                    q.pop();
                    vis[y][x]=1;
                    if (x>0)
                        if (!vis[y][x-1]&&matrix[y][x-1]==1)
                            q.push({y,x-1});
                    if (y>0)
                        if (!vis[y-1][x]&&matrix[y-1][x]==1)
                            q.push({y-1,x});
                    if (x<size(matrix[0])-1)
                        if (!vis[y][x+1]&&matrix[y][x+1]==1)
                            q.push({y,x+1});
                    if (y<size(matrix)-1)
                        if (!vis[y+1][x]&&matrix[y+1][x]==1)
                            q.push({y+1,x});
                }
            }
        }
    }
    return res;
}
