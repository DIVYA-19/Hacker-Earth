'''
this problem can be solved by converting the given n into ternary(base 3)
100 - 10201 -> (1*3^0 + 0*3^1 + 2*3^2 + 0*3^3 + 1*3^4) 
-- no of powers of 3 used in this are -> 4 (1+2+1)
we calculate those bits first (bits)
and compare with given k value
-- if bits are greater then k value, there is no way to write given num into k powers of 3
-- we can write 100 as 3^0 + 3^1 + 3^1 + 3^1 + 3^2 + 3^4 -> 6 bits
-- -- we can divide some numbers into powers of 3 again, when bits are even if we divide some of the numbers we still get even same
      happen with odd too -- so we check both bits and k values are even or odd
'''
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
