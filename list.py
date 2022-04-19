numbers = [0, 2, 7, 9, 10]

# insert line of code here.

#declaring a list named 'foc' because we have to print a list named foc
foc=[]   
for i in range(len(numbers)):
	foc.append(numbers[i] * numbers[i])  #appending the square of numbers list into foc list

print(list(foc))
