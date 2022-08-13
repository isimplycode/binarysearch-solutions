int solve(Tree* root) {
    if(!root) return 0;
    int res=0;
    queue<Tree*> q;
    q.push(root);
    while (q.size()) {
        auto root=q.front();
        q.pop();
        res+=root->val;
        if (root->right) {
            q.push(root->right);
        }
        if (root->left) {
            q.push(root->left);
        }
    }
    return res;
}
