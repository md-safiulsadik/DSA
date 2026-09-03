
def NcR(r, c):
    res = 1
    for i in range(c):
        res *= r - i
        res //= i + 1

    return res

R = 5
C = 1
n = 5

# Type-2: Better {
#     Time: O(n x C)
#     Space: O(1)
# }
# for i in range(n):
#     if i == n - 1:
#         print(NcR(n -1, i))
#     else:    
#         print(NcR(n -1, i), end=" ")


# Type-2: Optimal {
#     Time: O(n)
#     Space: O(1)
# }

# res = 1
# print(res, end=" ")

# for i in range(1, n):
#     res *= (n - i)
#     res //= i  
    
#     print(res, end=" ")  
