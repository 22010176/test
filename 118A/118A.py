a = input().lower()

result = ''
for j in 'aoyeui':
    a = a.replace(j, '')
for i in a:
    result += f'.{i}'
print(result)
