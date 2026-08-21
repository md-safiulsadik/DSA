
def is_palindrome(s, n, i):
    if i >= n//2:
        return True

    if s[i] != s[n - i - 1]:
        return False

    return is_palindrome(s, n, i + 1)


s = 'MADAM'
print(is_palindrome(s, len(s), 0))