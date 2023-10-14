#!/usr/bin/python
import math
import time
import sys 
import pdb
from curve import Curve
import numpy as np


def g_l (P, Q):
    #print(P, Q)
    #pdb.set_trace()
    if P == 0:
        return Q
    if Q == 0:
        return P
    if (P[0] == Q[0]) and (P[1] == -Q[1]):
        return 0
    if (P[0] == Q[0]) and (P[1] == Q[1]):
        m = ((3*P[0]**2)/(2*P[1]))
        print(m) 
    else:
        m = ((Q[1]-P[1]))/((Q[0]-P[0]))
        #print(m)
    x3 = (m**2-P[0]-Q[0])
    return [x3 ,(m*(P[0] - x3)-P[1])]

def easy_mult(n1,P):
    result = 0 
    for i in range (n1):
        result = g_l(P, result)
    return result

def mult_2 (n1,P):
    result = '0'
    pow_2P = P
    while n1 !=0:
        if (n1 %2)==1:
            result = g_l ( pow_2P , result )
        n1 //=2
        pow_2P = g_l ( pow_2P , pow_2P )
    return result

def is_prime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True

def check(L):
    print((L[1]**2)==(L[0]**3+8))
    #print(L[0]**3-5*L[0])



P=[1,3]
p=11
q=17
n=181
e=5
d=29

b=8


#check(P)
#print(P)
#F=easy_mult(2, P)
#check(F)
#print(F)
#G=g_l([-1,2], P)
#check(G)
#print(G)
curve=Curve()
curve.p=23
curve.n=391
curve.g=([0,0])

#for i in range(10):
#    for j in range(10):
#        curve.g=([i,j])
#        if curve.valid(curve.g):
#            print(curve.g)


curve.g=([2,1])
print(curve.g)
print(curve.valid(curve.g))
eM=curve.mul(curve.g, 5)
dM=curve.mul(eM, 29)
print(eM)
print(curve.valid(eM))
print(dM)
print(curve.valid(dM))


#curve.g=[1 ,3]
#n=int(sys.argv[1])
#i=2
#while True:
#    c=math.gcd(((curve.mul(curve.g,i))[0]),n)
#    i+=1
#    if c>1:
#        if is_prime(c):
#            print(c)
#            n=int(n/c)
#            if is_prime(n):
#                print(n)
#                break

