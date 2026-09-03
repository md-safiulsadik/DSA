nums = [-2,1,-3,4,-1,2,1,-5,4]

# Brute force {
#     Time: O(n^2)
#     Space: O(1)
# }

# def maxSubArray(nums):
#         maxi = nums[0]
#         start = 0
#         end = 0

#         for i in range(len(nums)):
#             sum = 0
#             for j in range(i, len(nums)):
#                 sum += nums[j]

#                 if sum > maxi:
#                     maxi = sum
#                     start = i
#                     end = j

#         return start, end

# print(maxSubArray(nums))


# Optimal Solution (Kadane's algorithm) 
maxi = nums[0]
total = 0
st = 0
end = 0
start = 0

for i in range(len(nums)):
    if total == 0:
        st = i

    total += nums[i]

    if total > maxi:
        maxi = total
        start = st
        end = i

    if total < 0:
        total = 0

print(maxi, start, end)