matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

# Brute Force {
#     Time: O(nm + (n + m)) + O(nm) [N^3]
#     Space: O(1)
# }

# n = len(matrix) 
# m = len(matrix[0]) 

# for i in range(n):
#     for j in range(m):
#         print(matrix[i][j], end=" ")
#     print()
    

# def markRow(i):
#     for j in range(m):
#         if matrix[i][j] != 0:
#             matrix[i][j] = -1

# def markCol(j):
#     for i in range(n):
#         if matrix[i][j] != 0:
#             matrix[i][j] = -1
    

# for i in range(n):
#     for j in range(m):
#         if matrix[i][j] == 0:
#             markRow(i)
#             markCol(j)

# for i in range(n):
#     for j in range(m):
#         if matrix[i][j] == -1:
#             matrix[i][j] = 0

# for i in range(n):
#     for j in range(m):
#         print(matrix[i][j], end=" ")
#     print()


# Better {
#     Time: O(2nm)
#     Space: O(n) + O(m)
# }

# n = len(matrix)
# m = len(matrix[0])

# col = [0] * m
# row = [0] * n

# for i in range(n):
#     for j in range(m):
#         if matrix[i][j] == 0:
#             col[j] = 1
#             row[i] = 1

# for i in range(n):
#     for j in range(m):
#         if col[j] == 1 or row[i] == 1:
#             matrix[i][j] = 0

# for i in range(n):
#     for j in range(m):
#         print(matrix[i][j], end=" ")
#     print()



# Optimal 

