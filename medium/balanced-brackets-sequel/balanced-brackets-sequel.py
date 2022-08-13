class Solution:
    def solve(self, s):
        d = { ")":"(", "]": "[", "}": "{" }
        s = []
        for i in s:
            if i in [ "{", "[", "(" ]:
                s.append(i)
                continue
            if len(s) > 0 and s.pop() == d[i]:
                continue
            return False
        if s == []:
            return True
        return False
