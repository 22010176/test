a = input().split('+')
a.sort()
for i in range(len(a)):
    if i < len(a)-1:
        print(a[i], end='+')
    else:
        print(a[i])
