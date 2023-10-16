import sys

strA = sys.argv[1].replace('[', ' ').replace(']', ' ').replace(',', ' ').split()
strB = sys.argv[2].replace('[', ' ').replace(']', ' ').replace(',', ' ').split()
A = [float(i) for i in strA]
print(A)
B = [float (i) for i in strB]
print(B)
