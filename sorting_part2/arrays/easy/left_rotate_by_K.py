
arr = [2, 1, 5, 6, 6, 3, 0] 
n = len(arr)

k = int(input())
k = k % n 

temp = arr[:k]

for i in range(n - k):
    arr[i] = arr[k + i]


for i in range(k):
    arr[n - k + i] = temp[i]

print(arr)