n = int(input("Enter the number : "))

c = 0  #this variable counts the number of elements in a line

print("Output : ")

while True:
	print(n,end = '\t')     #printing the value
	c = c+1                 #increasing the value of c
	
	if c%10 == 0:           #if the number of element printed is divisible by 10, then print the next element in next line
		print()         # for next line
	
	if n == 1:             #if the value of n becomes 1, then break
		break
	
	if n % 2 == 0:        #if n is an even number
		n = n//2;     #integer division (//) by 2 
	else:                 # if n is an odd number
		n = 3*n + 1   #then n is assigned to 3n+1
	# end of while loop

print()                      #for newline

