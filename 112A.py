# https://codeforces.com/problemset/problem/112/A

a = input().lower()
b = input().lower()

def checker(a, b, i):
    if len(a) == i:
        return 0
    elif a[i] > b[i]:
        return 1
    elif a[i] < b[i]:
        return -1

    return checker(a, b, i + 1)

print(checker(a, b, 0))
