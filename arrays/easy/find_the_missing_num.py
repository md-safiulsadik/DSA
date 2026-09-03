
arr = [1, 2, 4, 5]

# Brute Force {
#     Time: O(n^2)
#     Space: O(1)
# }
# val = -1
# for i in range(1, len(arr) + 2):
#     flag = False
#     for j in arr:
#         if j == i:
#             flag = True
#             break
#     if not flag:
#         val = i
#         break

# print(val)



# Better solution

# maxi = max(arr)
# hsh = [0] * (maxi + 1)

# for x in arr:
#     hsh[x] += 1           # Using array hashing

# val = -1

# for i in range(1, len(hsh)):
#     if hsh[i] == 0:
#         val = i
#         break

# print(val)

# def missing_number(arr):

#     freq = {}

#     for x in arr:                         # Using map
#         freq[x] = freq.get(x, 0) + 1

#     for i in range(1, len(arr) + 2):
#         if i not in freq:
#             return i


# print(missing_number(arr))



# Optimal solution {
#     Time  → O(n)
#     Space → O(1)
# }
xor1 = 0
xor2 = 0

for i in range(len(arr)):
    xor1 ^= arr[i]
    xor2 ^= i + 1

xor2 ^= len(arr) + 1

result = xor1 ^ xor2

print(result)