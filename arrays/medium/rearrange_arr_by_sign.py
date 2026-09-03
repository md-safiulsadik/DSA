
nums = [3,1,-2,-5,2,-4]

# Brute Force {
#     Time: O(2n + n/2)
#     Space: O(n)
# }

# positive = [i for i in nums if i > 0]
# negative = [i for i in nums if i < 0]

# for i in range(len(nums) // 2):
#     nums[i * 2] = positive[i]
#     nums[i * 2 + 1] = negative[i]

# print(nums)

# Optimal (I guess) {
#     Time: O(n)
#     Space: O(n)
# }

arr = [0] * len(nums)
pos = 0
neg = 1

for i in range(len(arr)):
    if nums[i] < 0:
        arr[neg] = nums[i]
        neg += 2
    else:
        arr[pos] = nums[i]
        pos += 2
print(arr)