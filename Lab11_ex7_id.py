
def evenToFront(arr):
	x = len(arr)
	temp = []  #temporary list
	
	#adding all even number first to the temporary list
	for i in range(x):
		if(arr[i] %2 == 0):
			temp.append(arr[i])
	
	#then adding all odd numbers to the list
	for i in range(x):
		if(arr[i] %2 == 1):
			temp.append(arr[i])
	#returning list
	return temp

#function for reading data from keyboard
def readData():
	print("Enter list element seperated by space: ")
	arr = [ int(x) for x in input().split()]  #space seprated input
	return arr

#main function
def main():
	arr = readData()  #reading data from keyboard
	
	#printing the original list
	print("Original list: ",end = "")
	for i in range (len(arr) - 1):
		print(arr[i],end = ", ")
	print(arr[len(arr)-1])
	
	#calling evenToFront function
	temp = evenToFront(arr)
	
	#printing the list after moving evens to gthe front
	print("List after moving evens to gthe front: ",end = "")
	for i in range (len(temp) - 1):
		print(temp[i],end = ", ")
	print(temp[len(temp)-1])

#driver code
main()	

