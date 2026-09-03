
# nums = [3,2,1]
nums = [2, 1, 5, 4, 3, 0, 0]
# nums = [5, 4, 3, 2, 1, 0, 0]


def next_permutation(nums):
    bp = -1
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] < nums[i + 1]:
            bp = i
            break

    if bp == -1:
        nums.reverse()
        return nums

    for i in range(len(nums) - 1, bp, -1):
        if nums[i] > nums[bp]:
            nums[i], nums[bp] = nums[bp], nums[i]
            break

    nums[bp + 1:] = nums[bp + 1:][::-1]
    return nums

print(next_permutation(nums))