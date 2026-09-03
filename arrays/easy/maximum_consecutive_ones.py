
arr = [1, 1, 0, 1, 1, 1, 0, 1, 1]

# Optimal {
#     Time  → O(n)
#     Space → O(1)
# }

cnt = 0
maxi = -1

for i in range(len(arr)):
    if arr[i] == 1:
        cnt += 1
        maxi = max(cnt, maxi)
    else:
        cnt = 0

print(maxi)