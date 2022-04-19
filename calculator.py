def moveElementRight(s,n):
	k = n % len(s)   #calculating the effective position
	x = s[:len(s)-k]   #storing the substring discarding the last k character into x
	a = ""
	for i in range(k):
		a += "#"  #assigning k times '#' to a
	return a+x  #returning the string a+x

def moveElementLeft(s,n):
	k = n % len(s)   #calculating the effective position
	x = s[k:]   #storing the substring discarding the first k character into x
	a = ""
	for i in range(k):
		a += "*"  #assigning k times '*' to a
	return x+a   #returning the string x+a

#for display the menu
def display_menu():
	print("R- Move elements right")
	print("L- Move elements left")
	print("Q- Exit the program")

#for getting option from user
def get_option():
	while(True):   #infinite loop until user enters correct choice
		display_menu()
		ch = input("Enter one of the three option: ")
		if(ch == "R" or ch == "L" or ch == "Q"):
			return ch  #if user enters correct choice then return the choice
		else:   #i.e. user enters wrong choice
			print("Invalid input... Try again...")
			print("-----------------------------")

#calculator function
def calculator(ch, s, n):
	if(ch == "L"):  #if the choice is L then call moveElementLeft and return result
		return moveElementLeft(s,n)
	else:  #if the choice is R then call moveElementRight and return result
		return moveElementRight(s,n)

#main function
def main():
	while(True):  #infinite loop until user enters Q
		x = get_option()
		if(x == "Q"):
			return  #return if the choice of user is Q
		s = input("Enter string: ")
		n = int(input("Enter number of position: "))
		print("Result :",calculator(x, s, n))  #calling function and printing result
		print("-----------------------------")
#driver code
#calling main() function
main()

