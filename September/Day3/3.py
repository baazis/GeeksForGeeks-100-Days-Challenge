import copy
class Solution:
	def MakeZeros(self, matrix):
		# Code here
		a = len(matrix)
		b = len(matrix[0])
		temp = copy.deepcopy(matrix) 
# 		Copying the matrix exact
        for i in range(a):
            for j in range(b):
                if (temp[i][j]==0):
                    if (i-1)>=0:
                        matrix[i][j] += temp[i-1][j]
                        matrix[i-1][j] =0
                        
                    if (i+1)<a:
                        matrix[i][j] += temp[i+1][j]
                        matrix[i+1][j] =0
                        
                    if (j-1)>=0:
                        matrix[i][j] += temp[i][j-1]
                        matrix[i][j-1] =0
                        
                    if (j+1)<b:
                        matrix[i][j] += temp[i][j+1]
                        matrix[i][j+1] =0
                        
        return matrix
