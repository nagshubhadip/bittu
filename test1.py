import math
for n in range(3, 100000):
	x = 5 * n * n
	y = 100000*n* math.log10(n)
	if x - y > 0:
		print(n)
		break
	
x = 5 * 1000 * 1000
y = 100000*1000* math.log10(1000)

print(x, y, x-y)
