
#defining function for calculating factorial
def fact(n):
	s = 1
	for i in range(2, n+1):
		s *= i
	return s


#defining function for calculating double factorial
def double_fact(n):
	s = 1
	for i in range(n, 0, -2):
		s *= i
	return s


#taking input the value of n from the user
n = int(input("Enter the value of N: "))

#assigning Sum = 0
Sum = 0

#Loop will run from 0 to n
for k in range(0, n+1):
	f = fact(k)  #calculating k!
	d_f = double_fact(2*k+1)   #calculating k!!
	
	#adding k! / (2k+1)!! to the previous Sum
	Sum += f / d_f
#Calculating PI and printing result
PI = Sum*2
print("PI =",PI)

