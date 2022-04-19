a = [1, 2, 3]
c = 0
flag = 0
for i in range(0, 200):
	for j in range(3):
		print("(%d,%d)"%(a[j],i),end = '')
		c += 1
		if( c == 344):
			flag = 1
			break
	print()
	if ( flag == 1):
		break
