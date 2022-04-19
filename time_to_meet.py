def time_to_meet(car1, car2):

	#if the starting position of cars are same, then at time = 0, they are at the same position
	if(car1[2] == car2[2]):
		return 0
	
	#if both the cars' speed is same but starting position is different then they will never catch up, so return -1
	if(car1[1] == car2[1] and car1[2] != car2[2]):
		return -1
	
	#if the spped of car1 is < speed of car2 and starting pos of car1 < starting pos of car2
	#then in every second, the distance b/w car1 and car2 will increase and they will never catch up
	elif(car1[1] < car2[1] and car1[2] < car2[2]):
		return -1
	
	#if the spped of car1 is > speed of car2 and starting pos of car1 > starting pos of car2
	#then in every second, the distance b/w car1 and car2 will increase and they will never catch up
	elif(car1[1] > car2[1] and car1[2] > car2[2]):
		return -1
	sec = 0
	x = car1[2] #x stores the position of car1
	y = car2[2] #y stores the position of car2
	#infinite loop
	while(True):
		sec += 1
		#calculating position of each car in every second
		x = x + car1[1]
		y = y + car2[1]
		
		#if the starting position of car1 < starting position of car2 and x certainly becomes >= y
		#or if the starting position of car1 > starting position of car2 and x certainly becomes <= y
		#that implies, they have catched up each other
		if((car1[2] < car2[2] and x >= y) or (car1[2] > car2[2] and x <= y)):
			return sec
		

print(time_to_meet(['Black', 10, 15],  ['Red', 3, 200]))
print(time_to_meet(['Red', 10, 250],  ['White', 7, 420]))
print(time_to_meet(['Blue', 12, 550],  ['Green', 13, 300]))
print(time_to_meet(['Red', 20, 500],  ['Cyan', 25, 300]))
print(time_to_meet(['Black', 4, 200],  ['Purple', 4, 300]))
print(time_to_meet(['Gray', 11, 200],  ['Black', 14, 300]))
