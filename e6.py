#!/usr/bin/python

p = 100
n1 = sum([x**2 for x in range(1,p+1)])
n2 = sum([x for x in range(1,p+1)])**2

print(n2 - n1)
