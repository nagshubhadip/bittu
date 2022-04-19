n = int(input("Enter the value of n: "))

#5. Assigning all element as 0
A = [[0 for i in range(n+1)] for j in range(n)]


print("Enter %d integer seperated by enter for the first element of each row:"%n)
for i in range(0,n):
	A[i][0] = int(input())
	

#3. (i)th x (i)th element is 1
#starting from index 1 because, at index 0, there is user input
for i in range(1,n):
	A[i][i] = 1
	
#4. (i)th x (i+1)th element is -1		
for i in range(0,n):
	A[i][i+1] = -1

#7.(n) x (n+1) element is -1	
A[n-1][n] = -1


print("The final array is : ")
for i in range(n):
	for j in range(n+1):
		print(" %d"%A[i][j],end = (""))
	print()
print()

