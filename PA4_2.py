
#input a number
n = int(input("Enter a stopping number: "))

print()

#i loop will continue for i = 1 to n
for i in range (1, n+1):
	#j loop will continue for j = i to n
	for j in range(i, n+1):
		#printing multiplication table
		print("%d*%d=%d"%(i, j, i*j))
	print()

