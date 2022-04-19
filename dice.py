import random
#passing 2 parameters to the function, b is the highest number of the dice and n is the number of repetitions
def diceAverage(b,n):
	sum=0
	for i in range(n):   #loop will run from i=0 to i=999,total 1000 times
		x=random.randint(1,b)  #generating random number
		sum += x  #adding the random  number with the sum
	return sum/n   #returning average
	
#main
print("Try 1 :",diceAverage(6,1000))  #calling the function 3 times
print("Try 2 :",diceAverage(6,1000))
print("Try 3 :",diceAverage(6,1000))
