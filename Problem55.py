def isPalin(n):
    a = 0
    m = n
    while(m!=0):
        a = m % 10 + a * 10
        m = m / 10

    if( n == a):
        return 1
    else: 
        return 0
        
def reverse(n):   
    a = 0
    m = n
    while(m!=0):
        a = m % 10 + a * 10
        m = m / 10
    return a
        
ans = 0 

for i in range(10001):
    #if(isPalin(i)==0):
        it =0
        x = i
        while(it<50):
            it = it+1
            x = x+reverse(x)
            if(isPalin(x)):
                break
        #if(i==4994):
        #    print(x)
        if(it>=50):
            print(i)
            #print(x)
            ans = ans+1

print(ans)        
    
