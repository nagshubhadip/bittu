#prompting user to input a year
year = int(input("Enter a year : "))

#if the year is divisible by 100 i.e. dividing year by 100, if remainder is = 0
if(year % 100 == 0):
	#then if the year is divisible by 400 also then it is a leap year
	if(year % 400 == 0):
		print("That is a leap year. February has 29 days.")
	
	#i.e. the year is divisible by 100 but not divisible by 400, so it is not a leap year
	else:
		print("That is not a leap year. February has 28 days.")

#i.e. the year is not divisible by 100		
else:
	#then check if the year is divisible by 4, if it is, then the year is a leap year
	if(year % 4 == 0):
		print("That is a leap year. February has 29 days.")
	#i.e. the year is not divisible by 100 or 4. So, the year is not a leap year
	else:
		print("That is not a leap year. February has 28 days.")
		
#end of program

