

[y0, x0] = input()
[y, x] = input()

height = 'abcdefgh'
y0 = height.index(y0)+1
y = height.index(y)+1
x0 = int(x0)
x = int(x)
res = []

ver = 'D U'
hor = 'L R'


def pos(x, x0):
    c = x-x0
    return c / (c if c > 0 else -c)


while x != x0 or y != y0:
    current = [0, 0]
    if x != x0:
        current[1] = pos(x, x0)
        x -= current[1]

    if y != y0:
        current[0] = pos(y, y0)
        y -= current[0]

    res.append(current)

print(len(res))
for [x, y] in res:
    print(f'{hor[int(x)+1]}{ver[int(y)+1]}')
