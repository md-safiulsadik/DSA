
def bubble_sort(arr):
    for i in range(len(arr)):
        is_swapped = False 

        for j in range(len(arr) - i - 1):
            if (arr[j] > arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                is_swapped = True

        if not is_swapped:
            break

    return arr


arr = [0, 2, 3, 1, 5]

print(bubble_sort(arr))

