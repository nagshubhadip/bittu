ip = input("INPUT: ")  #input number as a string

b = []  #defining the binary array

for i in range(len(ip)):
	 b.append(int(ip[i]))   #converting the string to integer
	 
xor = b[0] #initializing xor as the first bit

#xor operation is odd one detector. If there is odd numbers of 1, output is 1
for i in range(1,len(b)):
	xor = xor ^ b[i]   #calculating XOR(^) of all bits
#output
print("OUTPUT: ",xor)

