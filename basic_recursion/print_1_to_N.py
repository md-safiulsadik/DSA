def print_1_to_N(n):
    if n == 0: return

    print_1_to_N(n - 1)
    print(n)


def print_N_to_1(n):
    if n == 0: return

    print(n)
    print_1_to_N(n - 1)


print_1_to_N(5)
print()
print_N_to_1(5)
