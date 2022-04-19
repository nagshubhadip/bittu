
#======== Filename : matrix_mul.py ===============

#input the value of n
n = int(input("Enter the value of 'n' : "))

#defining A, B as List
A = []
B = []

#Input A
print("\nEnter the first matrix, A : (",n,"x",n,")\n")
for i in range(0,n):
	A.append([int(j) for j in input().split()])

#input B
print("\nEnter the second matrix, B : (",n,"x",n,") \n")
for i in range(0,n):
	B.append([int(j) for j in input().split()])

#initializing C as nxn zero matrix
C = [[0 for j in range(n)] for i in range(n)]


#multiplication part
for i in range(0,n):
	for j in range(0,n):
		for k in range(0,n):
			C[i][j] += A[i][k]*B[k][j]
			

#printing result
print("\nResultant Matrix is : \n")
for i in range(0,n):
	for j in range(0,n):
		print(C[i][j], end = " ")
	print() #for newline

print()


