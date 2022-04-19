def rsel_sort(xlst):
	#base case: if the size of the list = 1, then return the list
	if(len(xlst) == 1):
		return xlst
	
	#if the size of the list > 1
	else:
		A = []  #declaring a local list A
		x = min(xlst) #finding the minimum value of the list
		xlst.remove(x)   #remomiving the minimum value from the list 'xlst'
		A += [x]   #Adding the minimum value to the list A
		return A + rsel_sort(xlst)   #recursion call



#test cases
xlst = [5, 7, 8, 9, 1, 0, 3]
print("Before Sorting: ",xlst)
print("After Sorting: ",rsel_sort(xlst))
print()

xlst = [11, -7, 55, 42, 6]
print("Before Sorting: ",xlst)
print("After Sorting: ",rsel_sort(xlst))
print()

xlst = [1, 1, 8, 7, 5, 4, 3, 3, 21, 0, 8, 5]
print("Before Sorting: ",xlst)
print("After Sorting: ",rsel_sort(xlst))
print()

