# Example 1:
# Input:N = 4554
# Output:Palindrome Number
# Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

number = int(input())
arr = []


while (number != 0):
    digit = number % 10
    arr.append(digit)
    number //= 10



