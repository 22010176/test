length = int(input())

arr1 = list(map(int, input().split(' ')))
arr2 = list(map(int, input().split(' ')))
test1 = [*arr1]
test2 = [*arr2]

a = test1 if len(test1) < len(test2) else test2
result = []


def sorting(arr=[]):
    res = []
    for i in range(len(arr)):
        if arr[i] == i+1:
            continue
        b = arr.index(i+1)
        arr[b] = arr[i]
        arr[i] = i+1
        res.append(i)
    print(arr)
    return res


print(sorting(arr1))
print(sorting(arr2))
