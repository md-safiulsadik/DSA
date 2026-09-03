
arr = [2, 1, 5, 6, 6, 3, 0]
temp = arr[0]

print(arr)

for i in range(1, len(arr)):
    arr[i - 1] = arr[i]

arr[-1] = temp

print(arr)