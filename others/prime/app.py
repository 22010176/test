import time
n = 10


def a(n):
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
        # If prime[p] is not
        # changed, then it is a prime
        if (prime[p] == True):
            if n % p == 0:
                return False
            # Update all multiples of p
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
    return prime[n]
