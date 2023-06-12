def fact(n):
    f = 1
    for i in range(n,1,-1):
        f = f * i
    return f

numRows = int(input())
ls = []
for i in range(numRows-1):
    sub = []
    for j in range(0,i+1):
        val = int(fact(i)/(fact(i-j)*fact(j)))
        sub.append(val)
    ls.append(sub)
print(ls)