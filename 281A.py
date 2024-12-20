# https://codeforces.com/problemset/problem/281/A

a = input()
print(a if a[0] < 'a' else a[0].upper()+a[1:])
