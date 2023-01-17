test = int(input())
result = []
while test > 0:
    test -= 1
    input()
    arr = map(int, input().split(' '))
    e = list(arr)
    e.reverse()
    if e[0] == e[1]:
        out = False
        c = e[0]
        for i in range(2, len(e)):
            if e[i] == e[0]:
                continue
            out = True
            e[0] = e[i]
            e[i] = c
            break
        if not out:
            result.append(["NO", None])
            continue
    result.append(["YES", e])


for [res, arr] in result:
    print(res)
    if arr != None:
        print(*arr)
