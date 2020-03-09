n,k = map(int, input().split())

a = list(map(int, input().split()))

s = sum(a)
ans = int(n/s)
if n%s ==0 :
    print(ans)
else:
    print(ans+1)
