class Solution:
    def solve(self, root):
        res=[]
        ans=[]
        def bfs(root,res,level):
            if root:
                if len(res)<=level:
                    res.append([])
                res[level].append(root.val)
                bfs(root.left,res,level+1)
                bfs(root.right,res,level+1)
        bfs(root,res,0)
        for i in res:
            ans.append(i[0])
        return ans
