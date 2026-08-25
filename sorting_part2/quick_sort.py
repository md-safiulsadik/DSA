
def partition(arr, low, high):
    pivot = arr[low]
    i = low
    j = high

    while i < j:
        while i < high and arr[i] <= pivot:
            i += 1
        while j > low and arr[j] > pivot:
            j -= 1

        if (i < j):
            arr[i], arr[j] = arr[j], arr[i]

    arr[low], arr[j] = arr[j], arr[low]

    return j


def quick_sort(arr, low, high):
    if low >= high:
        return 

    p_index = partition(arr, low, high)
    quick_sort(arr, low, p_index - 1)
    quick_sort(arr, p_index + 1, high)


arr = [5, 2, 8, 1, 3, 7]

quick_sort(arr, 0, len(arr) - 1)

print(arr)