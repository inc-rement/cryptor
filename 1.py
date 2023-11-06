#!/usr/bin/python
import sys

#strA = sys.argv[1].replace('[', ' ').replace(']', ' ').replace(',', ' ').split()
#strB = sys.argv[2].replace('[', ' ').replace(']', ' ').replace(',', ' ').split()
#A = [int(i) for i in strA]
#print(A)
#B = [int(i) for i in strB]
#print(B)


inputs=list(sys.stdin)
for g in inputs:
#    if n =="---------------":
#        print(n)
    if g == '1\n':
        print(g)




my_num = 1357

if isinstance(my_num, int):
    print('number is int')

if isinstance(my_num, float):
    print('number is float')

