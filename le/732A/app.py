[price, n] = map(int, input().split(" "))

i = 0
while 1:
    i += 1
    if (price*i-n) % 10 == 0 or price*i % 10 == 0:
        break
print(i)
