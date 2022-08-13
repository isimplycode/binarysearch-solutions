int solve(Tree* root) {
    queue<Tree*> q;
    q.push(root);
    while (!q.empty()) {
        root=q.front();
        q.pop();
        if (root->right) q.push(root->right);
        if (root->left) q.push(root->left);
    }
    return root->val;
}
