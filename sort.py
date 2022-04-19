
#opening file and reading file contents in the array
with open('numbers.txt') as t:
	arr = [int(x) for x in next(t).split()]

#printing the unsorted array
print("The array before sorting:")
print(arr)
print()
#storing the size of the array in variable n
n = len(arr)

#bubble sort
for i in range(n-1):
	for j in range(n-i-1):
		if(arr[j] > arr[j+1]):
			arr[j+1], arr[j] = arr[j], arr[j+1]
#printing result
print("The sorted array is:")
print(arr)

