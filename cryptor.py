#!/usr/bin/python
import math
import time
import sys 
import pdb
from curve import Curve
import numpy as np
from curve import bi, ib
from primePy import primes
curve=Curve()
pr=[]
e=1
d=1
p=1
q=1
n=1
#curve=Curve()
#p=9743
#q=9749
#n=p*q

#e=251
#d=189251

class Cryptor:
    __message=0
    l=0
    h=0
    x=0
    y=0

    #def __init__(self):
    def mess(self, message_):
        self.__message=message_

    def ele(self):
        while True:
            self.x = (((self.__message*15)))+self.l
            self.y = (pow(self.x, 3, curve.p)+curve.a*self.x+curve.b) % curve.p
            if math.sqrt(self.y)==int(math.sqrt(self.y)):
                break
            self.l=self.l+1
        self.l=0


    def code(self):
        #print("y=", self.y, "   x=", self.x)
        curve.g=(self.x,int(math.sqrt(self.y)))
        print(curve.valid(curve.g))
        print(curve.g)
        eM=curve.mul(curve.g, e)
        dM=curve.mul(eM, d)
        print(dM)
        print(curve.valid(dM))
        print("message: ",(math.floor(dM[0]/15)))
        print(d,e)

cryptor=Cryptor()
for t in range(int(0), int(10000)):
    if primes.check(t):
        if(2==t%3):
            pr.append(t)

for i in range(int(1), int(100)):
    for j in range(int(1), int(100)):
        #print(pr[i], pr[j])
        for k in range(int(1), int(100)):
            for l in range(int(1), int(100)):
                if(1%math.lcm(pr[i]+1, pr[j]+1)==(k*l)%math.lcm(pr[i]+1, pr[j]+1)):
                    p=pr[i]
                    q=pr[j]
                    n=p*q
                    curve.p=p
                    curve.n=n
                    d=13#k
                    e=85#l
                    cryptor.mess(int(3))
                    cryptor.ele()
                    cryptor.code()


class Tree:
    def __init__(self):
        self.left=None
        self.right=None
        self.data=None

root=Tree()
root.data="data"
root.left=Tree()
root.rigth=Tree()

#cryptor=Cryptor()
#i=(sys.stdin)
#for i in inputs:
#    start = time.time()
#cryptor.mess(int(14))
#cryptor.ele()
#cryptor.code()
#    end = time.time()
#print(end - start)
