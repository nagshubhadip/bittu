import math

n = 4

s = 0
for i in range(n+1):
	x = math.factorial(3*i)
	y = 1207 + 26480*i
	z = math.factorial(i) ** 3
	p = 430 ** (3*i)
	s += (x*y) / (z*p)
	print(x, y, z, p, s)
res = ((7 ** 0.5)/ 8800) * s 
print (res)
	
