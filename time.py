import timeit


#let, to run this program, ff(n) calculates the sum of first n numbers from 1
def ff(n):
	sum = 0
	for i in range(1, n+1):
		sum += i



#driver code

#input the value of k
k = int(input("Enter value of k: "))

#initializing n = 1000
n = 1000

#the loop will run k+1 times (from i = 0 to i = k)
for i in range(k+1):
	#capturing the time before calling function
	start = timeit.default_timer()
	#calling function ff(n)
	ff(n)
	#capturing the time after calling function
	end = timeit.default_timer()
	
	#t is the execution time of function ff(n) 
	t = end - start
	#printing result
	print("n = ",n,", time = ",t)
	
	#multiplying n by 2
	n *= 2
#end of program

