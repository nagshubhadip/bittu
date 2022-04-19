n = int(input("Enter number of days: "))

#if the input is valid
if(n >= 1):
	pay = 1
	s = 1
	print("  Day    Pay")
	
	#printing the first day pay
	print("   1     ",pay)
	for day in range(2, n+1):
		#current day pay is previus pay*2 + previus pay
		pay = pay*2 + pay
		s = s+pay
		print("   %d      %d"%(day,pay))
	
	print("Total pay is .%d"%s)
	
else:
	print("Invalid input.")
