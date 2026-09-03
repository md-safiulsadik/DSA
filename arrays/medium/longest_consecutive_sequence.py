
nums = [1, 100, 4, 200, 1, 3, 3, 2, 2] 

# Brute force {
#     Time: O(n^2)
#     Space: O(1)
# }
# longest = 1

# def linear_search(arr, n):
#     for x in arr:
#         if x == n:
#             return True

#     return False    

# for i in range(len(nums)):
#     n = nums[i]
#     cnt = 1

#     while linear_search(nums, n + 1):
#         cnt += 1
#         n += 1

#     longest = max(cnt, longest)

# print(longest)



# Better {
#     Time: O(n lon n + n)
#     Space: O(1)
# }



# nums.sort()  # O (n log n)

# last_small = float('-inf')
# cnt = 0
# longest = 0

# for i in range(len(nums)):
#     if last_small == nums[i]:
#         continue

#     if nums[i] - 1 == last_small:
#         cnt += 1
#         last_small = nums[i]
#     else:
#         cnt = 1
#         last_small = nums[i]

#     longest = max(longest, cnt)

# print(longest)



# Optimal 

nums = set(nums)
longest = 1

for x in nums:
    cnt = 1
    if x - 1 not in nums:
        while x + 1 in nums:
            cnt += 1
            x += 1

        longest = max(longest, cnt)

print(longest)