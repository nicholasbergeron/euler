#!/usr/bin/env python

S = []

def fib(n):
        if n in [1,2]:
 		return n
 	return fib(n-1) + fib(n-2)

for i in range(1,1000):
        x = fib(i)
	if x >= 4000000:
		break

	if x % 2 == 0:
		S.append(x)

print(sum(S))
