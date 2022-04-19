def split(A):
	L = []
	G = []
	x = A[0]
	for i in range (1,len(A)):
		if A[i] > A[0]:
			G.append(A[i])
		elif A[i] < A[0]:
			L.append(A[i])
	return L,G
x = []
x = [int (x) for x in input().split()]
l1,l2 = split(x)
print(l1)
print(l2)
