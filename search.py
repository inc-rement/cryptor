from primePy import primes
for i in range(1000):
    if primes.check(i):
        if i%3==2:
            print(i)
