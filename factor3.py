#!/usr/bin/python
import math
import time
import sys 

def g_l (P, Q):
    #print(P, Q)
    if P == 0:
        return Q
    if Q == 0:
        return P
    if (P[0] == Q[0]) and (P[1] == -Q[1]):
        return 0
    if (P[0] == Q[0]) and (P[1] == Q[1]):
        m = ((P[0]**2+3+2))%n
        print(m) 
    else:
        m = ((Q[1]-P[1]))/((Q[0]-P[0]))
        #print(m)
    x3 = (m**2-P[0]-Q[0])%n
    return [x3 ,(m*(P[0] - x3)-P[1])%n]

def easy_mult(n,P):
    result = 0 
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

def check(L):
    print((L[1]**2)%n==(L[0]**3+3*L[0]+4)%n)





P=[2,2]
p=5
q=7
n=7
e=5
d=29

b=8


#(check(P))
#print(P)
F=g_l(P, P)
check(F)
print(F)
#G=easy_mult(d , F )
#print(G)

