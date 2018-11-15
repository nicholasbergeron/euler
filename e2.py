#!/usr/bin/env python

def fib(n):
	if n in [1,2]:
 		return n
 	return fib(n-1) + fib(n-2)

S = []

for i in range(1,1000):
	if fib(i) >= 4000000:
		break

	if fib(i) % 2 == 0:
		S.append(fib(i))

print(sum(S))
