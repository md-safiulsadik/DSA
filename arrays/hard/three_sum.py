
nums = [-3, -2, -1, 0, 1, 2, 3]
# Expected: [[-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]

# Brute Force {
#     Time: O(n^3)
#     Space: O (1)
# }

# st = set()

# for i in range(len(nums)):
#     arr = []
#     for j in range(i + 1, len(nums)):
#         for k in range(j + 1, len(nums)):
#             if nums[i] + nums[j] + nums[k] == 0:
#                 arr = [nums[i], nums[j], nums[k]]
#                 arr.sort()
#                 st.add(tuple(arr))
# print(st)


# Better solution {
#     Time: O(n x n)
#     Space: O(n + k)
# }

# res = []
# ans = set()

# for i in range(len(nums)):
#     st = set()
#     for j in range(i + 1, len(nums)):
#         el3 = - (nums[i] + nums[j])
#         if el3 in st:                    # O(1) look up
#             res = [nums[i], nums[j], el3]
#             res.sort()                  # Only sort 3 element
#             ans.add(tuple(res))
#         st.add(nums[j])

# print(ans)


# Optimal (two pointer) {
#   Time: n long n + n^2
#   Space: O(1) [if answer not considered] 
# } 

nums.sort()
j = 0
n = len(nums)
ans = []

for i in range(len(nums)):
    if i > 0 and nums[i] == nums[i - 1]:
        continue

    if nums[i] > 0:  # As the arr is sorted 
        break
    
    j = i + 1
    k = n - 1

    while j < k:
        total = nums[i] + nums[j] + nums[k]

        if total < 0:
            j += 1
        elif total > 0:
            k -= 1
        else:
            ans.append(nums[i], nums[j], nums[k])
            j += 1
            k -= 1

            while j < k and nums[j] == nums[j - 1]:
                j += 1

            while j < k and nums[k] == nums[k + 1]:
                k -= 1
                
print(ans)