
def sum_of_n_number(n):
    if n <= 1:
        return 1

    return n + sum_of_n_number(n - 1)

print(sum_of_n_number(3))
