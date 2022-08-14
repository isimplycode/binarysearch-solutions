int solve(LLNode* node, int k) {
    vector<int> res;
    while (node!=0) {
        res.push_back(node->val);
        node=node->next;
    }
    return res[res.size()-k-1];
}
