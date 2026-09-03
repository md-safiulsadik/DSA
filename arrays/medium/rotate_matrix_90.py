
matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5], [3,1,2,4]]

n = len(matrix)

for i in range(n):
    for j in range(n):
        print(matrix[i][j], end=" ")
    print()

for i in range(n):
    for j in range(i + 1, n):
        matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j] 

for row in matrix:
    row.reverse()

for i in range(n):
    for j in range(n):
        print(matrix[i][j], end=" ")
    print()
