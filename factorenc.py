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
#print(curve.n/curve.p)


curve.p=23
curve.n=391
curve.g=([0,0])

#for i in range(70):
#    for j in range(70):
#        curve.g=([i,j])
#        if curve.valid(curve.g):
#            print(curve.g)


xPs=sys.argv[1]
s=len(xPs)
crypt=''
crypty=''
for j in range(s):
    xP=ord(xPs[j])-96
    yP = math.sqrt((pow(xP, 3, curve.p) + curve.a*xP + curve.b) % curve.p)
    #print(yP)
    curve.g=([xP,int(yP)])
    #print("mess: ",chr(curve.g[0]+64))
#print(curve.valid(curve.g))
    eM=curve.mul(curve.g, 5)
    #dM=curve.mul(eM, 29)
    crypt=crypt+chr(eM[0]+96)
    crypty=crypty+chr(eM[1]+96)
    #decrypt=decrypt+chr(dM[0]+64)
print(crypt)
print(crypty)
#print(curve.valid(eM))
#print("dec: ",chr(dM[0]+64))
#print(curve.valid(dM))
#print("-------------")


