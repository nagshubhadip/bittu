import math
import sys
#input the value of a, b, c
a = int(input("Enter the value of 'a' for the equation \"ax^2 + bx + c = 0\": "))
b = int(input("Enter the value of 'b' for the equation \"ax^2 + bx + c = 0\": "))
c = int(input("Enter the value of 'c' for the equation \"ax^2 + bx + c = 0\": "))

#if a == 0 => ax^2 = 0 => it becomes a linear equation
if(a == 0):
	print("It is not a Quadratic equation.")
	sys.exit()

#calculating (b^2 - 4ac) 
temp = (b * b) - (4 * a * c)

#calculating (b^2 - 4ac) ^ (1/2)
r = math.sqrt(abs(temp))

#if b^2 - 4ac == 0 then both roots are real and same
if(temp  == 0):
	print("The same and real solution of the equation %dx^2 + %dx + %d is %d"%(a, b, c, (-b / (2*a))))
 	
#if b^2 - 4ac > 0 then both roots are real and different
elif(temp > 0):
	x1 = (-b + r) / (2*a)
	x2 = (-b - r) / (2*a)
	print("The two  real solution of the equation %dx^2 + %dx + %d are %d and %d"%(a, b, c, x1, x2))

#if b^2 - 4ac < 0 then both roots are complex
else:
	x = (-b) / (2*a)
	print("The two complex solution of the equation %dx^2 + %dx + %d are "%(a, b, c,),end = "")
	print("%d +i(%d) and %d -i(%d)"%(x,r,x,r))

