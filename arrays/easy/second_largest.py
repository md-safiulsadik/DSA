
arr = [2, 1, 5, 6, 6, 3, 0]

# Brute Force {
#     Best: O(n log n)
#     Avg/Worst: O(n log n + n)
# }
# arr.sort()
# largest = arr[len(arr) - 1]

# i = len(arr) - 1

# while i:
#     if arr[i] < largest:
#         break
#     i -= 1

# print(arr[i])    


# Better solution {
#     Best/Avg/Worst: O(n + n)
#     Space: O(1)
# }
# largest = arr[0]
# s_largest = float('-inf')

# for x in arr:
#     if x > largest:
#         largest = x

# print(largest) 

# for x in arr:
#     if x > s_largest and x != largest:
#         s_largest = x

# print(s_largest)


# Optimal solution {
#     Time: O(n)
#     Space: O(1)
# }

largest = arr[0]
s_largest = float('-inf')

for x in arr:
    if x > largest:
        s_largest = largest
        largest = x
    elif x > s_largest and x != largest:
        s_largest = x

print(largest)
print(s_largest)