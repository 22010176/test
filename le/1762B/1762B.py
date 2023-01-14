import math
test = int(input())
result = []

for i in range(test):
    length = int(input())
    c = list(map(lambda x, y: [y, int(x)], input().split(
        ' '), [i for i in range(length)]))
    c.sort(key=lambda x: x[1])
    # print(c)
    lowest = c[0][1]
    time = []
    for i in range(1, len(c)):
        [index, item] = c[i]
        if (item % lowest == 0):
            lowest = item
            continue
        sum = math.ceil(item / lowest) * lowest
        lowest = sum
        diff = sum - item
        while diff > item:
            diff -= item
            time.append([index+1, item])

        time.append([index + 1, diff])
    result.append(time)


for i in result:
    print(len(i))
    for j in i:
        print(j[0], j[1])
