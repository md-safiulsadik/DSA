
arr = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]

# Brute Force {
#     Time  → O(n²)
#     Space → O(1)
# }
# def appears_once(arr):
#     for x in arr:
#         cnt = 0
#         for y in arr:
#             if y == x:
#                 cnt += 1

#         if cnt == 1:
#             return x
        
# print(appears_once(arr))


# Better solution {
#     Time  → O(n)
#     Space → O(n)
# }
# freq = {}

# for x in arr:
#     freq[x] = freq.get(x, 0) + 1

# for x in freq:
#     if freq[x] == 1:
#         print(x)
#         break


# Optimal solution {
#     Time: O(n)
#     Space: O(1)
# }

xor = 0

for x in arr:
    xor ^= x

print(xor)