#Define bigger(a,b)
def bigger(a,b):
	if a > b:  #checking if a is greater than b
		print("a is bigger than b")
	elif b > a:  #chaied conditionals
		print("b is bigger than a")
	else:
		print("a and b are equal")

#driver code
a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
bigger(a,b)
