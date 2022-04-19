#function definition
def speed_limit(speed, limit):
	#if the speed is less than or equal to 10% of the speed limit
	if(speed <= round(0.1*limit)+limit):
		return 0
	#if the speed is less than or equal to 20% of the speed limit but greater than 10 %
	elif(speed <= round(0.2*limit)+limit):
		return 1
	#if the speed is greater than 20% of the speed limit
	else:
		return 2
#driver code

#input	
speed = float(input("Enter the speed you are driving: "))
limit = float(input("Enter the speed limit: "))

#calling function
x = speed_limit(speed, limit)

#comparing the returned value and printing result
if(x == 0):
	print("NO TICKET")
elif(x == 1):
	print("SMALL TICKET")
elif(x == 2):
	print("BIG TICKET")

