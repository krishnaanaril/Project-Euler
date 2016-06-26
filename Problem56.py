maxVal = 0
ansa = 0
ansb = 0

def getSum(num):
    res = 0
    while(num):
        res = res+num%10
        num = num/10
    return res

for i in range(101):
    for j in range(101):
        n = pow(i, j)
        m = getSum(n)
        if(m>maxVal):
            maxVal = m
            ansa = i
            ansb = j
print(maxVal)
print(ansa)
print(ansb)

