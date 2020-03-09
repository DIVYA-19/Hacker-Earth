q = int(input())

def ternary(n):
    if n == 0:
        return '0'
    nums = []
    while n:
        n,r = divmod(n,3)
        nums.append(str(r))
    return ''.join(reversed(nums))
powers = []

for _ in range(q):
    n, k = map(int, input().split())
    temp = n
    bits = 0
    bits = sum(map(int, list(ternary(n))))
    if bits>k or k>n:
        print('NO')
    else:
        if bits %2 == k%2:
            print("YES")
        else:
            print("NO")
