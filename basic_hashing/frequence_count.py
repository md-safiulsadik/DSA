
def frequencies_counter(arr):
    freq = {}
    for i in arr:
        freq[i] = freq.get(i, 0) + 1

    return freq


        

arr = [1, 2, 3, 1, 2, 1, 4, 3, 2]
s = "programming"


freq = frequencies_counter(arr)

for key, val in freq.items():
    print(f"{key} -> {val}")