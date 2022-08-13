class Solution:
    def solve(self, root):
        if not root: return 0
        res=[]
        def bfs(node,res,level):
            if node:
                if (len(res)<=level):
                    res.append([])
                res[level].append(node.val)
                bfs(node.left,res,level+1)
                bfs(node.right,res,level+1)
        bfs(root,res,0)
        summ=0
        for i in res[len(res)-1]:
            summ+=i
        return summ
