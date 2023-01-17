test = int(input())


def solve(l, r, x, a, b):
    if abs(a-b) > x:
        return 0
    c = (b-a)/abs(b-a)
    if b + c*x:
        return 1
    if True:
        return 2
    if True:
        return 3


res = []
while test:
    [l, r, x] = map(int, input().split(' '))
    [a, b] = map(int, input().split(' '))
    res.append(solve(l, r, x, a, b))
    test -= 1

print(*res)
