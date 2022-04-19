goal = float(input("Enter the goal : "))
base = 5000
com_to_be_earned = goal - base


#if the commission to be earned is > $900 then he has to sell atleast $10,000
if(com_to_be_earned > 900):
	#For first 10,000 Commission earned = 5000*0.08 + 5000*0.1 = $900
	com_to_be_earned = com_to_be_earned - 900
	#the remaining amount is the profit earned at the rate of 12%
	Sales_to_be_done = com_to_be_earned * 100 / 12
	#add 10,000 because $900 commission is already earned by selling $10,000
	Sales_to_be_done = Sales_to_be_done+10000
	print("Sales to be done to earn $",goal," : $"+"{:.2f}".format(Sales_to_be_done))
	
#if the commission to be earned is <= $900 and > $400 then he has to sell atleast $5,000	
elif (com_to_be_earned <= 900 and com_to_be_earned >400):
	#For first $5,000 Commission earned = 5000*0.08 = $400
	com_to_be_earned = com_to_be_earned - 400
	#the remaining amount is the profit earned at the rate of 10%
	Sales_to_be_done = com_to_be_earned * 100 / 10
	#add 5,000 because $400 commission is already earned by selling $5,000
	Sales_to_be_done = Sales_to_be_done+5000
	print("Sales to be done to earn $",goal," : $"+"{:.2f}".format(Sales_to_be_done))
	
#if the commission to be earned is <=400 then there is no quota
else:
	#commission to be earned at the rate of 8%
	Sales_to_be_done = com_to_be_earned * 100 / 8
	print("Sales to be done to earn $",goal," : $"+"{:.2f}".format(Sales_to_be_done))

