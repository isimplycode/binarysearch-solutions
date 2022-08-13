class Solution:
    def solve(self, root):
        res=[]
        def dfs(root,res):
            if root:
                dfs(root.left,res)
                res.append(root.val)
                dfs(root.right,res)
            else:
                res.append(None)
        dfs(root,res)
        new=res.copy()
        new.reverse()
        return res==new
