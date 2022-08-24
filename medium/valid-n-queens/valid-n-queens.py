class Solution:
    def solve(self, matrix):
        queencount=0
        hori=set()
        col=set()
        dl=set()
        dr=set()
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if (matrix[i][j]==1):
                    if ({j}.issubset(col) or {i}.issubset(hori) or {i-j}.issubset(dl) or {i+j}.issubset(dr)):
                        return False
                    hori.add(i)
                    col.add(j)
                    dl.add(i-j)
                    dr.add(i+j)
                    queencount+=1
        if queencount!=len(matrix): return False
        return True
