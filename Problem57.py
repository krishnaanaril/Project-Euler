a = 3
b = 2
i = 1
ans = 0

while(i<=1000):
    if(len(str(a)) > len(str(b))):
        ans = ans+1
    #print(i, a, b)
    c = 2*b+a
    d = a+b
    a = c
    b = d
    i = i+1
print(ans)
