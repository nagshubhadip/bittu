import sys

#input two numbers
m = int(input("Input starting number: "))
n = int(input("Input ending number: "))

#checking in the entered numbers are suitable or not, if not then exit
if(m >= n or m < 0):
	print("First number should be less than the second number and both number should be greater than or equal to 0")
	print("Try again...")
	sys.exit()

#calculating the length of the 2nd number
x = len(str(n))

print("   ",end = "")

#the loop is for printing the first row
for i in range(m, n+1):
	print("{:4}".format(i,x), end = "")
print()
#for every i from m to n
for i in range(m, n+1):
	#printing i value first
	print("{:3}".format(i,x), end = "")
	
	#for each i, for each j value from m to n
	for j in range(m, n+1):
		#calculating GCD
		for k in range(min(i,j), 0, -1):
			if(i%k == 0 and j%k == 0):
				#printing GCD in formatted way
				print("{:4}".format(k,x), end = "")
				break
	print()

