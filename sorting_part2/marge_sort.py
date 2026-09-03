
def merge(arr, low, high, mid):
    left = low
    right = mid + 1
    temp = []

    while left <= mid and right <= high:
        if arr[left] < arr[right]:
            temp.append(arr[left])
            left += 1
        else:
            temp.append(arr[right])
            right += 1

    while left <= mid:
        temp.append(arr[left])
        left += 1

    while right <= high:
        temp.append(arr[right])
        right += 1
                
    i = 0
    while (low <= high):
        arr[low] = temp[i]
        low += 1
        i += 1


def merge_sort(arr, low, high):
    mid = (low + high) // 2

    if low >= high:
        return

    merge_sort(arr, low, mid)
    merge_sort(arr, mid + 1, high)
    merge(arr, low, high, mid)

arr = [5, 2, 8, 1, 3, 7]

print(arr)

merge_sort(arr, 0, len(arr) - 1)

print(arr)