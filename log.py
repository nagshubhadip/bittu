import math
for i in range (1000, 1000000):
	if(100*math.log10(i) < math.sqrt(i)):
		print (i)
		break 
