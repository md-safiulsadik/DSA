
arr = [2, 1, 5, 6, 6, 3, 0]
temp = arr[len(arr) - 1]

print(arr)

for i in range(len(arr) - 1, 0, -1):
    arr[i] = arr[i - 1]

arr[0] = temp

print(arr)