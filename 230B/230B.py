import math
input()
a = list(map(int, input().split()))


def solve(b):
    s = math.sqrt(b)
    s2 = math.sqrt(s)
    s3 = math.ceil(s2)
    if s % 1 != 0:
        return "NO"
    if s % 2 == 0:
        return "NO"
    for i in range(1, s3 + (-1 if s3 % 2 == 0 else -3), 2):
        if s % i == 0:
            return "NO"
    return "YES"


for i in a:
    if i == 1:
        print("NO")
    elif i == 4:
        print("YES")
    else:
        print(solve(i))
