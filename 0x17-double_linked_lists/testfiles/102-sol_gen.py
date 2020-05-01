#!/usr/bin/python3
def is_palindrome(a):
    b = str(a)[::-1]
    if str(a) == str(b):
        return (1)
    else:
        return (0)


d = 0
for i in range(999, 0, -1):
    for j in range(999, 0, -1):
        c = i * j
        d = is_palindrome(c)
        if d == 1:
            print("{}".format(c))
            break;
    if d == 1:
        break;
