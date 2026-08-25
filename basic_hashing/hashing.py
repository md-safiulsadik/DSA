
# s = "abcaabcbaa"
# seen = {}

# for ch in s:
#     seen[ch] = seen.get(ch, 0) + 1

# print(seen)

arr = [1, 3, 2, 1, 3, 2, 2, 1]

seen = {}

for i in arr:
    seen[i] = seen.get(i, 0) + 1

print(seen)







