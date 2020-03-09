import math
n,p = map(int, input().split())

a = list(map(int, input().split()))
cost = 0
temp  = 0
for i in a:
    if math.ceil(math.log(i,p)) == 0:
        temp += p ** math.ceil(math.log(i,p))+1
    else:
        temp += p ** math.ceil(math.log(i,p))
print(temp)
