import math
test = int(input())

resutl = []


def dfadfas(a):
    d = 0
    e = list(map(lambda i: [i, 0 if i % 2 else 1], a))
    while True:
        for i in range(len(a)):
            c = e[i][0]
            e[i][0] = int(c / 2)
            if e[i][0] % 2 == e[i][1]:
                d += 1
                return d
        d += 1


for i in range(test):
    input()
    s = 0
    a = list(map(int, input().split(' ')))
    for i in a:
        s += i
    if s % 2 == 0:
        resutl.append(0)
        continue
    resutl.append(dfadfas(a))

[print(i) for i in resutl]
