
arr = [2, 3, 4, 2, 3, 3, 5, 3, 2]

# Brute Force {
#     Time  → O(n²)
#     Space → O(1)
# }
# cnt = 0
# majority = None

# for i in range(len(arr)):
#     cnt = 0
#     for j in range(len(arr)):
#         if arr[i] == arr[j]:
#             cnt += 1
#     if cnt > len(arr) // 2:
#         majority = arr[i]

# print(majority)


# Better approach {
#     Time: O(n)
#     Space: O(n)
# }

# freq = {}
# el = None

# for x in arr:
#     freq[x] = freq.get(x, 0) + 1

# for x in arr:
#     if freq[x] > len(arr) // 2:
#         el = x

# print(el)



# Optimal solution (Mooes's voting algorithm) {
    # Time  → O(n)
    # Space → O(1)
# } 

candidate = None
cnt = 0

for x in arr:
    if cnt == 0:
        candidate = x

    if x == candidate:
        cnt += 1
    else: 
        cnt -= 1

cnt1 = 0

for x in arr:
    if x == candidate:
        cnt1 += 1

if cnt1 > len(arr) // 2:
    print(candidate)
else:
    print(None)
