
#function defination for recursive selection sort
def sel_sort(arr, low):
	#taking the lower indexed element as minimum element
	minimum_pos = low
	
	#loop for finding the minimum element's position
	for i in range(low+1, len(arr)):
		if arr[i] < arr[minimum_pos] :
			minimum_pos = i
	
	#swapping the minimum element with the low position
	arr[low], arr[minimum_pos] = arr[minimum_pos], arr[low]
	
	#incrementing low
	low += 1
	
	#if low is still less than the size of array then sort the array from the index low
	if low < len(arr) :
		sel_sort(arr, low)  #RECURSIVE CALL

#end of function


#driver code
arr = []  #defining array/list

print("Enter the array elements : ")
arr = [ int(x) for x in input().split()]   #input array elements

print("Array before Sorting : ")
print(arr)   #printing the array before sorting

sel_sort(arr, 0)  #calling the sorting function

print("Array after Sorting : ")
print(arr)  #printing the array after sorting

