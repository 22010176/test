input()
a = list(map(int, input().split(' ')))

even = []
odd = []
for i in range(len(a)):
    if a[i] % 2:
        odd.append(i)
    else:
        even.append(i)
    if len(even) > 1 and len(odd) > 0:
        print(odd[0]+1)
        break
    elif len(odd) > 1 and len(even) > 0:
        print(even[0]+1)
        break
