#!/usr/bin/python
import math
import time
import sys 

def g_l (P, Q):
    #print(P, Q)
    if P == '0':
        return Q
    if Q == '0':
        return P
    if (P[0] == Q[0]) and (P[1] == -Q[1]):
        return '0'
    if (P[0] == Q[0]) and (P[1] == Q[1]):
        m = (3*P[0]**2+5)/(2*P[1])
        #print(m) 
    else:
        m = (Q[1]-P[1])/(Q[0]-P[0])
        #print(m)
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

def is_prime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True





P= [1 ,1]
a= math.fmod(1, 10403)
#n=int(sys.argv[1])
inputs=list(sys.stdin)
i=2
j=0
for n in inputs:
    while True:
        c=math.gcd(int((easy_mult(i , P ))[0]),int(n))
        i+=1
        if c>1:
            if is_prime(c):
                print("---------------")
                print("factor ", n)
                print(c)
                n=int(int(n)/c)
                if is_prime(int(n)):
                    print(int(n))
                    break

