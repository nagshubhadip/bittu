
#function for printing the upper triangle
def printTriangleUp(s):
	c = 0
	n = len(s)
	for i in range(n):   #i controls the height
		for j in range(0, i+1):   #j controls the width
			print(s[j], end = "")
			c += 1  #incrementing the count
		print()
	return c  #returning count



#function for printing the lower triangle
def printTriangleDown(s):
	c = 0
	n = len(s)
	for i in range(n-2, -1, -1):   #i controls the height
		for j in range(0, i+1):   #j controls the width
			print(s[j], end = "")
			c += 1  #incrementing the count
		print()
	return c   #returning count


##function for taking the user input
def userInput():
	s = input("Enter a short sentence: ")
	return s   #returning input string


#function for printing the count
def countUsed(x):
	print("\nTotal Count:",x)


#main function
def main():
	s = userInput()
	x = printTriangleUp(s)
	x += printTriangleDown(s)
	countUsed(x)


#driver code, calling main function
main()
