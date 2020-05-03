#!/usr/bin/python3
def is_palindrome(a):
    b = str(a)[::-1]
    if str(a) == str(b):
        return (1)
    else:
        return (0)


d = 0
e = 0
for i in range(999, 100, -1):
    for j in range(999, 100, -1):
        c = i * j
        d = is_palindrome(c)
        if d == 1 and c > e:
            e = c
print("{}".format(e))
