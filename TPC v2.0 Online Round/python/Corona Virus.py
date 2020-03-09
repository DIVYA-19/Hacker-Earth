n = int(input())
s = list(input())

mem = []
count = 1
check = 0
mem2 = []
for i in range(n):
    if s[i] == '1':
        if check%2 == 0:
            mem.append(i)
        else:
            mem2.append(i)
        check += 1

if len(mem) == len(mem2):
    for i in range(0,len(mem)-1):
        if mem[i+1] - mem2[i] != 1:
            count *= (mem[i+1] - mem2[i])
    if count == 0:
        print(count+1)
    else:
        print(count)
else:
    print(-1)
