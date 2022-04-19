#prompting the user for the input in specific format
inp = input(" Enter the number in the format of \"XXX-XXX-XXXX \" : ")

#checking if the length of the input is equal to 12. if so then proceed 
if len(inp) == 12:
	#converting the lowercase letter to uppercase
	inp = inp.upper()
	for i in inp:
		#if the correct character is A or B or C then replace it with 2
		if(i == "A" or i == "B" or i == "C") :
			inp = inp.replace(i,"2")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "D" or i == "E" or i == "F") :
			inp = inp.replace(i,"3")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "G" or i == "H" or i == "I") :
			inp = inp.replace(i,"4")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "J" or i == "K" or i == "L") :
			inp = inp.replace(i,"5")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "M" or i == "N" or i == "O") :
			inp = inp.replace(i,"6")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "P" or i == "Q" or i == "R" or i == "S") :
			inp = inp.replace(i,"7")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "T" or i == "U" or i == "V") :
			inp = inp.replace(i,"8")
		
		#if the correct character is A or B or C then replace it with 2
		elif(i == "W" or i == "X" or i == "Y" or i == "Z") :
			inp = inp.replace(i,"9")
	
	#printing the final result
	print(" The number is : ",inp)

#if the length of the input is not equal to 12 then do nothing
else:
	print(" Wrong input. Try again..")

