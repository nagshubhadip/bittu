import sys  #importing sus for command line argument
import math
x=sys.argv[1]  #taking the value of x
x=float(x)  #converting x to a float value
y1 = ( 1 - math.cos(x) ) / (x*x)  #calculating y1
y2 = 2*((math.sin(x/2))**2) / (x*x)  #calculating y2
if x<=0:
	y3 = 0   #calculating y3
elif x>0 and x<=1:
	y3 = 3*x*x - 2*x*x*x    #calculating y3
else:
	y3 = 1    #calculating y3
y4 = (1 / (( 2 * math.pi )**0.5)) * (math.exp(-(x*x)/2))    #calculating y3
#printing results
print(y1)
print(y2)
print(y3)
print(y4)
