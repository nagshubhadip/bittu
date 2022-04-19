import numpy as np
goals = np.array([2, 3, 0, 1, 2])
two_or_more = np.where(goals>1)[0]
print(two_or_more)



def my_evens(my_numbers):
	arr = my_numbers[my_numbers % 2 == 0]
	return arr

my_numbers = np.array([1, 2, 3, 4, 5])
even_numbers = my_evens(my_numbers)
print(even_numbers)



data = np.array([[1, 2, 3, 4],
                 [10, 20, 30, 40],
                 [100, 200, 300, 400]])
selection = data[-1, -1]
print(selection)
