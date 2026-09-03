
# nums = [2, 2, 1, 1, 1, 2, 2]
nums = [1, 1, 1, 3, 3, 2, 2, 2]
# Expected: [1, 2]

n = len(nums)
x = n // 3 # 
ans = []

# Brute force {
#     Time: O(n^2)
#     Space: O(1)
# }

# for i in range(n):
#     cnt = 1
#     for j in range(i + 1, n):
#         if nums[j] == nums[i] and nums[j] not in ans:
#             cnt += 1

#     if cnt > x:
#         ans.append(nums[i])

# print(ans)            


# Better solution {
#     Time: O(n)
#     Space: O(n)
# }

# seen = {}

# for num in nums:
#     seen[num] = seen.get(num, 0) + 1

#     if seen[num] > x:
#         ans.append(num)

# print(ans)



# Optimal (Mooes's voting algorithm)

cnt1, cnt2 = 0, 0
cnd1, cnd2 = None, None

for num in nums:
    if cnt1 == 0 and cnd2 != num:
        cnd1 = num
        cnt1 = 1

    elif cnt2 == 0 and cnd1 != num:
        cnd2 = num
        cnt2 = 1

    elif num == cnd1:
        cnt1 += 1
    elif num == cnd2:
        cnt2 += 1
    else:
        cnt1 -= 1
        cnt2 -= 1

print(cnd1, cnd2)
