

s = 'abcaabcbaa'

seen = [0] * 26

for ch in s:
    seen[ord(ch) - ord('a')] += 1


test = []
n = int(input())


for i in range(n):
    test.append(input())


for i in test:
    print(seen[ord(i) - ord('a')])
