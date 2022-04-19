a = int(input("Please Enter First Number of an G.P Series: : "))
n = int(input("Please Enter the Total Numbers in this G.P Series: : "))
r = int(input("Please Enter the Common Ratio : "))

total = 0
value = a
print("\nG.P  Series :", end = " ")
for i in range(n):
    print("%d  " %value, end = " ")
    total = total + value
    value = value * r
    
print("\nThe Sum of Geometric Progression Series = " , total/100000)
