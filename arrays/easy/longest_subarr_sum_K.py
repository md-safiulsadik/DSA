

# arr = [10, 5, 2, 7, 1, 9]
# k = 15

arr = [1, 2, -3, 1, 1, 1, 1, 4, 2, 3]
k = 4

# Brute Force {
#     Time: O(n^2)
#     Space: O(1)
# }
# total = 0
# maxLen = 0

# for i in range(len(arr)):
#     total = 0

#     for j in range(i, len(arr)):
#         total += arr[j]

#         if total == k:
#             maxLen = max(maxLen, j - i + 1)
        
# print(maxLen)


# Better Solution (Optimal if there is negative value in arr) {
#     Time: O(n)
#     Space: O(n)
# }

# hashmap = {}
# pre_sum = 0
# maxLen = 0

# for i in range(len(arr)):
#     pre_sum += arr[i]

#     if pre_sum == k:
#         maxLen = max(maxLen, i + 1)

#     rem = pre_sum - k

#     if rem in hashmap:
#         length = i - hashmap[rem]
#         maxLen = max(maxLen, length)

#     if pre_sum not in hashmap:
#         hashmap[pre_sum] = i


# print(maxLen)



# Optimal solution (If only zero's and positive number) {
#     Time  → O(n)
#     Space → O(1)
# }

i, j = 0, 0
maxLen = 0
n = len(arr)
total = arr[0]

while j < n:
    while total > k:
        total -= arr[i]
        i += 1

    if total == k:
        maxLen = max(maxLen, j - i + 1)

    j += 1
    if j < n:
        total += arr[j]

print(maxLen)