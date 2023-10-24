#!/usr/bin/python
import math
import time
import sys 
import pdb
from curve import Curve
import numpy as np
from curve import bi, ib

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
class Table:
    ASCII = 1
    Symbol = 2
    G = 3
    Point = 4

cry = [Table() for i in range(10)]
#print(cry[0].ASCII)



curve=Curve()
#print(curve.n/curve.p)
#curve.g=([48439561293906451759052585252797914202762949526041747995844080717082404635286, 36134250956749795798585127919587881956611106672985015071877198253568414405109])

curve.p=113
curve.n=12091
#print(curve.g)

xP=0
j=0
arr=[]
#for u in range(51):
#    arr.append(0)

while True:
    xP=xP+1
    yP=math.sqrt((pow(xP, 3, curve.p) + curve.a*xP + curve.b) % curve.p)
    if yP==int(yP):
        print("-------------")
        j=j+1
        print(xP, yP)
        print("on line:", curve.valid([xP, yP]))
        curve.g=([xP,yP])
    #print("mess: ",chr(curve.g[0]+64))
        ##print(curve.g)
        x=0
        l=0
        h=0
        while True:
            x = curve.g[0]*50+l
            y = (pow(x, 3, curve.p)+curve.a*x+curve.b) % curve.p
            if math.sqrt(y)==int(math.sqrt(y)):
                g=False
                #print (l)
                h=h+1
                for d in arr:
                    if d[0]==l:
                        g=True
                if g==False:
                    #arr[l]=curve.g[0]
                    r=[l, x, curve.g[0]]
                    arr.append(r)
            l=l+1

            if h > 10:
                break
        #print(curve.valid([x,math.sqrt(y)]))
        #print(x/50)
        #print (arr)
    if j>10: 
        break




#arr.sort()
#print(arr)

#for i in arr:
#    for j in arr:
#        if i[2]==j[2]:
#            if arr.index(i)!=arr.index(j):
#                print("matching: ", i, j)




xPs=1#=sys.argv[1]
#s=len(xPs)
crypt=''
decrypt=''
#for j in range(1):
#print(xP, yP)
t=0
for i in arr:
    curve.g=([(i[1]), (i[2])])
    #print("mess: ",chr(curve.g[0]+64))
    if curve.valid(curve.g)==True:
        #print(curve.valid(curve.g))
        #print(curve.g)
        t=t+1

#print(t)
##x=0
##l=0
##h=0
##while True:
##    x = curve.g[0]*30+l
##    y = (pow(x, 3, curve.p)+curve.a*x+curve.b) % curve.p
##    if math.sqrt(y)==int(math.sqrt(y)):
##        print (l)
##        h=h+1
        #break
##    l=l+1
##    if h > 2:
##        break


M=4+96
print(chr(M))
x = 8 
y = (pow(x, 3, curve.p)+curve.a*x+curve.b) % curve.p

curve.g=(x,int(math.sqrt(y)))
print(curve.valid(curve.g))
print(curve.g)


eM=curve.mul(curve.g, 47)
dM=curve.mul(eM, 131)
    #crypt=crypt+str(eM[0])
    #decrypt=decrypt+str(dM[0])
print(dM)
#print(decrypt)
        #print(curve.valid(dM))
#print("dec: ",chr(dM[0]+64))
#print(curve.valid(curve.g))
#print("-------------")

print(ib(dM[0]+96))



