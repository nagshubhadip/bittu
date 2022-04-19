
N = int(input("Enter an integer: "))

evenSum = 0

#loop will continue until i is equal to N i.e. until i < N+1
for i in range(1, N+1):
	#if i is divisible by 2 the it is even number
	if(i % 2 == 0):
		#adding i to the evenSum
		evenSum += i
	#increment i
	i += 1
#printing result
print("Sum of all even number between 1 and %d = %d"%(N, evenSum))

