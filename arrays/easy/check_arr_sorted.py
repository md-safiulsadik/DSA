
# arr = [2, 1, 5, 6, 6, 3, 0]
arr = [1, 2, 2, 2, 3, 4, 5, 6]

def check_sorted(arr):
    for i in range(1, len(arr)):
        if arr[i] < arr[i - 1]:
            return False

    return True

print(check_sorted(arr))