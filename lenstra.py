import math
import pdb

def g_l_l ( P, Q, a ):
    if P[2] != 1:
        if P[1]==1:
            return Q
        return P
    if Q[2] != 1:
        if Q[1]==1:
            return P
        return Q
    if (P[0] == Q[0]) and (P[1] == -Q[1]):
        return [0 ,1 ,0]
    if (P[0] == Q[0]) and (P[1] == Q[1]):
        #pdb.set_trace()
        if int(P[1])!=P[1]:
            return [0 ,0,P [1]]
        m = (int(P[0])**2+2+a )/2/P[1]
    else :
        if int(Q[0] -P[0])!=Q[0]-P[0]:
            return [0 ,0,Q[0] -P[0]]
        m = (Q[1] -P[1])/(Q[0] -P[0])
    x3 = m**2-int(P[0]) -int(Q[0])
    return [x3 ,m*(int(P[0]) - x3)-int(P[1]) ,1]

def mult_2_l (n,P,a):
    result = [0 ,1 ,0]
    pow_2P = P
    while n !=0:
        if (n %2)==1:
            result = g_l_l ( pow_2P , result , a )
        n //=2
        pow_2P = g_l_l ( pow_2P , pow_2P , a )
    return result

#print(g_l_l ([9696 , 506 ,1] ,[7878 , 10200 ,1] ,1))


def is_prime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True



def lenstra (n, bound_a , bound_b ):
    #import pdb; pdb.set_trace()
    if is_prime (n):
        print(n,'is prime')
        return n
    if n %2==0:
        return 2
    if n %3==0:
        return 3
    for a in range ( bound_a ):
        # Consider only elliptic curves
        if math.fmod(4*a**3+27 , n )==0:
            continue
        f_point = [math.fmod(0,n),math.fmod (1,n) ,1]
        for b in range ( bound_b ):
            # compute factorial
            f_point = mult_2_l (b+1, f_point ,a)
            if f_point[2]==0:
                break
            if f_point[2]>1:
                #print(a,b)
                return math.gcd(int( f_point[2]) , n)
    print('Increase the values of bound_a and bound_b')

print(lenstra (25 ,200 ,100))
print(lenstra ( (10^8+7) ,200 ,100))
print (lenstra ( 10^20+699 ,200 ,100))
print (lenstra ( 10^30+427 ,300 ,1000))

