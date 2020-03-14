import math
q = int(input())

Q = []

def gcd(a,b):
    while(a):
        r = a
        a = b%a
        b = r
    return b

for _ in range(q):
    Q.append(list(map(int, input().split())))

for i in Q:
    x = i[0]
    y = i[1]

    g = gcd(y,x)

    #power = math.log(g,2)
    if g & (g-1) == 0:
        print("Yes")
    else:
        print("No")
