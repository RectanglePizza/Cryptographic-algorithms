# create a extended algorithm

def gcd(a,b):
    if b == 0:
        return [1,1]
    x1,y1 = gcd(b,a%b)

    #print(x1,y1)

    x = y1
    y = x1 - ((a/b) * y1)

    #print((x,y))
    return x,y

x_val,y_val = gcd(10,5)

print( 10 * x_val + 5 * y_val  )
