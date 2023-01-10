import math
test = int(input())

resutl = []


for i in range(test):
    input()
    s = 0
    a = list(map(int, input().split(' ')))
    for i in a:
        s += i
    # print(a)
    if s % 2 == 0:
        resutl.append(0)
        continue
    resutl.append(math.ceil(pow(min(a), 0.5)))

[print(i) for i in resutl]
