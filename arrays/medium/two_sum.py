
arr = [2, 6, 5, 8, 11]
target = 16

# Brute Force {
#     Time -> O(n^2)
#     Space -> O(1)
# }
# def two_sum(arr):
#     for i in range(len(arr)):
#         for j in range(i + 1, len(arr)):
#             if arr[i] + arr[j] == target:
#                 return i, j
#     return None

    

# Better solution (Optimal if asked for index) {
    # Time: O(n)
    # Space: O(n)
# }

# hashmap = {}

# def two_sum(arr):
#     for i in range(len(arr)):
#         rem = target - arr[i]

#         if rem in hashmap:
#             return hashmap[rem], i

#         hashmap[arr[i]] = i
 

# Optimal for type-1 {
#     Time  : O(n log n)
#     Space : O(1)
# }

def two_sum(arr):
    i, j = 0, len(arr) -1
    arr.sort()

    while i <= j:
        if arr[i] + arr[j] == target:
            return "YES"

        if arr[i] + arr[j] < target:
            i += 1
        else:
            j -= 1
    return "NO"

print(two_sum(arr))