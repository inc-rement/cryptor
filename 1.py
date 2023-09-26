import math
import time


def g_l (P, Q):
    print(P, Q)
    if P == '0':
        return Q
    if Q == '0':
        return P
    if (P[0] == Q[0]) and (P[1] == -Q[1]):
        return '0'
    if (P[0] == Q[0]) and (P[1] == Q[1]):
        m = (3*P[0]**2+a)/2/P[1]
    else:
        m = (Q[1]-P[1])/(Q[0]-P[0])
    x3 = m**2-P[0] -Q[0]
    return [x3 ,m*(P[0] - x3)-P[1]]

def easy_mult(n,P):
    result = '0' 
    for i in range (n):
        result = g_l(P, result)
    return result

def mult_2 (n,P):
    result = '0'
    pow_2P = P
    while n !=0:
        if (n %2)==1:
            result = g_l ( pow_2P , result )
        n //=2
        pow_2P = g_l ( pow_2P , pow_2P )
    return result

#E = EllipticCurve (GF (1000000007) ,[ -6 ,5])
#P = E ([2 ,1])
a = math.fmod( -6 ,5)
b = math.fmod(5 ,5)
P=[2,1]

start = time.time()
(print(easy_mult(10**6,P)))
end = time.time()
print("The time of execution of above program is :",
        (end-start) * 10**3, "ms")


start = time.time()
(print(mult_2(10**6, P)))
end = time.time()
print("The time of execution of above program is :",
        (end-start) * 10**3, "ms")


P= [5 ,17]
a= math.fmod(1, 10403)
print(mult_2(math.factorial(7) , P ))
