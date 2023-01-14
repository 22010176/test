
test = int(input())
a = '0 1'
b = '1 0'
for i in range(test):
    [height, length] = map(int, input().split())
    dd = 0
    for k in range(height):
        if k % 2 != 0:
            dd += 1
        for j in range(int(length/2)):
            if (j+dd) % 2 == 0:
                print(a, end=' ')
                continue
            print(b, end=' ')
        print()
