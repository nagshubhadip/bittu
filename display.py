def brightness_modifier(n) :   # function brightness_modifier()
	if n==0 : return 1.0   #if n is 0, then returning 1.0
	elif n==1 : return 0.9   #if n is 1, then returning 0.9
	elif n==2 : return 0.75   #if n is 2, then returning 0.75
	else : return 0.5   #if n is 3, then returning 0.5
n = int(input("Enter the integer : "))
print("Brightness Modifier = ", brightness_modifier(n))
