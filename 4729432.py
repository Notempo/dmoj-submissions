n = int(input())
for i in range(n):
    a,b = map(str, input().split())
    b = b[:int(a)-1] + b[int(a):]
    print(i+1,b)