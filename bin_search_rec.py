#function for binary search recursively
def bin_search(arr, low, high, key):
	
	#checking is low is still less equal to the high
	#if so then follow the steps
	if low <= high:
	
		#calculating MID value
		mid = ( low + high ) // 2
		
		#base case
		if arr[mid] == key:
			return mid;
		
		#if mid element is less than the key then find the key element
		# in the right sub array of the mid
		elif arr[mid] < key:
			return bin_search(arr, mid+1, high, key)
		
		#if mid element is greater than the key then find the key element
		# in the left sub array of the mid
		else:
			return bin_search(arr, low, mid-1, key)
	
	
	#i.e. if low > high that means key element is not present inside the array
	else:
		return -1
#end of function


#driver code

#defining array
arr = []

#input array // condition is "ARRAY MUST BE SORTED"
print("Input the elements of the array in sorted way: ")
arr = [ int(x) for x in input() .split()]

#input key element
key = int(input("Enter the element to be searched : "))

#calling function
pos = bin_search(arr, 0, len(arr)-1, key)

#if the function returned -1, then element is not present
if pos == -1:
	print(key,"is not present...")
#else, printing the location of the key element
else:
	print(key,"is present at the ",pos+1,"'th position...")

