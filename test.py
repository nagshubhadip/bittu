def mystery(lst):
	total = 0
	c = 0
	n = len(lst)
	for i in range(n):
		for j in [i+1, n]:
			total += sum(lst[i:j])
			print(i,j,total,sum(lst[i:j]))
	return total
l = [1,2,3]
#print(mystery(l))

x = "abcd"
for i in range(10):
	print(x[i])
