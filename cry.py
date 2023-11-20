#!/usr/bin/python
import math
import time
import sys 
import pdb
from curve import Curve
import numpy as np
from curve import bi, ib

curve=Curve()

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
            self.x = (((self.__message*30)))*28+self.l
            self.y = (pow(self.x, 3, curve.p)+curve.a*self.x+curve.b) % curve.p
            if math.sqrt(self.y)==int(math.sqrt(self.y)):
                break
            self.l=self.l+1
    
    def code(self):
        #print("y=", self.y, "   x=", self.x)
        curve.g=(self.x,int(math.sqrt(self.y)))
        #print(curve.valid(curve.g))
        #print(curve.g)
        eM=curve.mul(curve.g, e)
        dM=curve.mul(eM, d)
        #print(dM)
        #print(curve.valid(dM))
        print(math.floor((dM[0]/(28*30))))

cryptor=Cryptor()
inputs=list(sys.stdin)
for i in inputs:
    inputs[0]=inputs[0].replace("[","")
    inputs[0]=inputs[0].replace("]","")
    inputs[0]=inputs[0].replace("\n","")
    inputs[0]=inputs[0].replace(", ","*")
    print(len(inputs[0])) 
    print(inputs[0].rfind("*"))
    p=int(inputs[0])
    q= int(1) 
    n= int(p)*int(q)
    curve.p=p
    curve.n=n
    print(curve.n)
    e=23 *173
    d=208387 
    #start = time.time()
    cryptor.mess(int(1))
    cryptor.ele()
    cryptor.code()
    #end = time.time()
    #print(end - start)
