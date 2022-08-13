class Solution:
    def solve(self, node):
        res=[]
        while node:
            res.append(node.val)
            node=node.next
        cpy=res.copy()
        cpy.reverse()
        return res==cpy
