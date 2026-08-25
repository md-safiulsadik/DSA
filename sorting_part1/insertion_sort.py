
def insertion_sort(arr):
    for i in range(1, len(arr)):
        j = i
        
        while j > 0 and arr[j - 1] > arr[j]:
            arr[j], arr[j - 1] = arr[j - 1], arr[j]
            j -= 1

    return arr

arr = [0, 2, 3, 1, 5]

print(insertion_sort(arr))
