test = int(input())


def solve(l, r, x, a, b):
    pass


res = []
while test:
    [l, r, x] = map(int, input().split(' '))
    [a, b] = map(int, input().split(' '))
    res.append(solve(l, r, x, a, b))
    test -= 1

print(*res)
