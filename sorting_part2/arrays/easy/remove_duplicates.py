# Remove duplicate from the given array 
# and put the quinic in the font of the array
# NB: doesn't care about what are the next element 
arr = [1, 1, 2, 4, 4, 4]

# Brute Force {
#     Time: O(n)
#     Space: O(n)
#    NB: Optimal for unsorted array
# }
# quinic = set()

# for i in range(len(arr)):
#     quinic.add(arr[i]) 

# print(quinic)

# i = 0
# for x in quinic:
#     arr[i] = x
#     i += 1

# print(arr)


# Optimal solution {
#     Time: O(n)
#     Space: O(1)
#     NB: Only works for sorted array
# }

i = 1
for j in range(2, len(arr)):
    if arr[j] != arr[i]:
        arr[i] = arr[j]
        i += 1

print(arr)