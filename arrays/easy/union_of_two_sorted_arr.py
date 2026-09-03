
arr1 = [1, 2, 2, 3, 4, 5, 6]
arr2 = [2, 4, 5, 6, 7]

# Brute Force {
#   Time: O(n1 + n2)
#   Space: O(n1 + n2)
# } 
# quinic = set(arr1) | set(arr2)
# print(list(quinic))

# n1 = len(arr1)
# n2 = len(arr2)
# i = 0
# j = 0

# while i < n1:
#     quinic.add(arr1[i])
#     i += 1

# while j < n2:
#     quinic.add(arr2[j])
#     j += 1

# result = []

# for x in quinic:
#     result.append(x)


# Optimal Solution {
#   Time: O(n1 + n2)
#   Space: O(n1 + n2)
#   It's O(1) space if result isn't considered
# }  

n1 = len(arr1)
n2 = len(arr2)
i = 0
j = 0
result = []

while i < n1 and j < n2:
    if not result or arr1[i] < arr2[j]:
        if arr1[i] != result[-1]:
            result.append(arr1[i])
        i += 1
    elif arr2[j] < arr1[i]:
        if arr2[j] != result[-1]:
            result.append(arr2[j])
        j += 1
    else:
        if arr1[i] != result[-1]:
            result.append(arr1[i])
        i += 1
        j += 1

while i < n1:
    if not result or arr1[i] != result[-1]:
        result.append(arr1[i])
    i += 1

while j < n2:
    if not result or arr2[j] != result[-1]:
        result.append(arr2[j])
    j += 1

print(result)