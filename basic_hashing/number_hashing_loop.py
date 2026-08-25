
arr = [1, 3, 2, 1, 3, 2, 2, 1]

seen = [0] * (max(arr) + 1)

for i in arr:
    seen[i] += 1

test = []

n = int(input())

for i in range(n):
    test.append(int(input()))


for i in test:
    print(seen[i])
