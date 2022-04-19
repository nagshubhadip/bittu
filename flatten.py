

def flatten(ls):
	#base case
	if(not(isinstance(ls, list))):
		return [ls]  #if the ls is not a list the returning ls as a list
	#if ls is a list
	else:
		temp = []  #creating a temporary list
		#for every element in ls, checking if it is flatten or not
		for i in ls:
			for j in flatten(i):   #flattering the list[i]
				temp.append(j)
		return temp  #returning the temporary list



#driver code
ls = [[2, 4], [[[6]]], [9, 7], 3]
print(flatten(ls))

