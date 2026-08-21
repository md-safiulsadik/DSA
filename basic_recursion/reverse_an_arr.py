
def reverse(arr, n, i):
    if i >= n//2:
        return

    arr[i], arr[n - i - 1] = arr[n - i - 1], arr[i]
    reverse(arr, n , i + 1)

arr = [34, 54, 65, 23]
reverse(arr, len(arr), 0)

print(arr)