
arr = [10, 22, 12, 3, 0, 6]  

# Brute Force {
#     Time: O(n^2)
#     Space: O(n)
# }

# leaders = []

# for i in range(len(arr)):
#     flag = True
#     for j in range(i + 1, len(arr)):
#         if arr[i] < arr[j]:
#             flag = False
#             break
#     if flag:
#         leaders.append(arr[i])

# leaders.reverse()   # if asked for sorted arr
# print(leaders)


# Optimal {
#     Time: O(n)
#     Space: O(n)
# }

leaders = []
last_leader = arr[len(arr) - 1]
leaders.append(last_leader)

for i in range(len(arr) - 2, -1, -1):
    if arr[i] > last_leader:
        last_leader = arr[i]
        leaders.append(last_leader)

print(leaders)