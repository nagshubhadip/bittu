
#input the number of exams
n = int(input("How many exams? "))

#initially taking sum as 0 and highest mark as -1
Sum = 0.0
Highest = -1.0

print()

#the loop will run form 1 to n
for i in range(1, n+1):
	#input score
	x = float(input("Enter a score: "))
	
	#calculating sum
	Sum += x
	
	#comparing with highest, if x greater than highest then new highest is x
	if( x > Highest):
		Highest = x

#calculating Average
avg = Sum / n

#output
print()
print("The average is %.1f, the high score is %d."% (avg, Highest))
