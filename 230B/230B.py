import math
input()
a = list(map(int, input().split()))


def solve(b):
    s = math.sqrt(b)
    s2 = math.sqrt(s)
    if int(s) != s or int(s2) == s2 or s % 2 == 0:
        return "NO"
    for i in range(3, math.floor(s2)+1, 2):
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
