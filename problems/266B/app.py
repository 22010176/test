time = int(input().split(" ")[1])
s = input()
for i in range(time):
    s = s.replace('BG', 'GB')
print(s)
