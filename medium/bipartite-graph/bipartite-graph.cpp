int vis[500];
void dfs(int node,int color, vector<vector<int>>&graph, bool &valid, unordered_map<int,int> &m) {
    if (m.find(node)!=m.end()) {
        if (m[node]!=color) valid=false;
    }
    if (vis[node]) return;
    vis[node]=1;
    m[node]=color;
    for (auto i : graph[node]) {
        dfs(i,-color,graph,valid,m);
    }
}

bool solve(vector<vector<int>>& graph) {
    unordered_map<int,int> m;
    bool valid=true;
    for (int j=0; j<size(graph); ++j) {
            vis[j]=0;
    }
    for (int i=0; i<size(graph); ++i) {
        if (!vis[i])
            dfs(i,1,graph,valid,m);
    }
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    return valid;
}
