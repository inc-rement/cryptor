#!/usr/bin/python
import math
import sys 

def check(L):
    print((L[1]**2)%n==(L[0]**3+10*L[0]-2)%n)


n=4453
P=[1,3]
#(check(P))
#print((13*3711)%n)
y=(3*P[0]**2+10)%n
x=(2*P[1])%n
m=0
for i in range(5000):
    if((i*6)%4453)==1:
    #if((13/6)%4453)==i%4453:
        m=((y*i)%n)
        print('m = ', m)

x1=(m**2-2)%4453
y1=(-m*(x1-1)-3)%4453
print('2P = ', x1, y1)
