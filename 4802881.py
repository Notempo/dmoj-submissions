n = int(input())
a = list(map(int, input().split()))
b = 0
for i in range(n):
    if a[i] > 0:
        b += 1
print(b)