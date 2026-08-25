
arr = [2, 1, 5, 6, 3, 0]

# Brute Force {
    # Complexity: 
    #   Avg/Worst: O(n log n)
    # Space: O(n)
# }

# arr.sort()
# l_element = arr[len(arr) - 1] 
# print(l_element)


# Optimal Solution {
#     Best/Avg/Worst: O(n)
#     Space: O(1)
# } 

largest = arr[0]

for val in arr:
    if val > largest:
        largest = val

print(largest)

