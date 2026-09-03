
arr1 = [1, 2, 2, 3, 4, 5, 6]
arr2 = [2, 2, 4, 5, 6, 7]

# # Brute Force {
#     Time: O(n1 + n2)
#     Space: O(n1 + n2)
# }
# intersection = set(arr1) & set(arr2)
# print(intersection)


# Optimal

n1 = len(arr1)
n2 = len(arr2)
i, j = 0, 0
intersection = []


while i < n1 and j < n2:
    if arr1[i] != arr2[j]:
        i += 1
    else:
        # if not intersection or intersection[-1] != arr1[i]: # Use thi to remove duplicate
        intersection.append(arr1[i])
        i += 1
        j += 1

print(intersection)