
arr = [0, 1, 1, 0, 0, 2, 2, 1, 0, 0, 0]

# Brute Force (Default sorting) {\
#     Time: O(n long n)
#     Space: O(n)
# }
# arr.sort()
# print(arr)



# Better solution (Count the occurrence) {
#     Time: O(2n)
#     Space: O(1)
# }

cnt0, cnt1, cnt2 = 0, 0, 0

for x in arr:
    if x == 0:
        cnt0 += 1
    elif x == 1:
        cnt1 += 1
    else:
        cnt2 += 1

# for i in range(cnt0):
#     arr[i] = 0

# for i in range(cnt0, cnt0 + cnt1):
#     arr[i] = 1

# for i in range(cnt0 + cnt1, cnt0 + cnt1 + cnt2):
#     arr[i] = 2

# i = 0

# while cnt0 > 0:
#     arr[i] = 0
#     i += 1
#     cnt0 -= 1

# while cnt1 > 0:
#     arr[i] = 1
#     i += 1
#     cnt1 -= 1
    
# while cnt2 > 0:
#     arr[i] = 2
#     i += 1
#     cnt2 -= 1
    

# print(arr)


# Optimal Solution (Dutch National Flag Algo) {
#     Time: O(n)
#     Space: O(1)
# }

low, mid, high = 0, 0, len(arr) - 1

while mid <= high:
    if arr[mid] == 0:
        arr[mid], arr[low] = arr[low], arr[high]
        mid += 1
        low += 1
    elif arr[mid] == 1:
        mid += 1
    else:
        arr[mid], arr[high] = arr[high], arr[mid]
        high -= 1
print(arr)
