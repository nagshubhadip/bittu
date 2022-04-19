ip = input("INPUT: ")  #input number as a string

n = len(ip)  #n stores the size of string
b = int(ip[n-1])   #b stores the last bit of the input

op = b ^ 1 #if the last bit is 0, op will store 1. else if the number is 1, op will store 0
print("OUTPUT: ",op)

