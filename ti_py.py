# 1. check if all numbers are unique in sequence:
list_1 = [1, 2, 3, 4, 1, 1, 5]

# 2. what will be printed on screen
n = 2
print(n + n**2 + n**3)

# 1. Remove duplicate elements from a list
list0 = [2, 6, 4, 7, 4, 6, 7, 2]

# 2. What will be the result?
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(numbers[1::2])

# 3. Join dictionaries into one:
dict_a = {'1': 10, '2': 20}
dict_b = {'1': 15, '3': 30}
dict_c = {'5': 50, '6': 60}
result = {}

# 4. How to flatten 2D list?
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]] 

# 5. What will be the output?
from copy import copy, deepcopy
list_1 = [1, 2, [3, 5], 4]

## 
list_2 = copy(list_1) 
list_3 = deepcopy(list_1)
list_2[3] = 7 
list_2[2].append(6)
list_2    # output => 
list_1    # output => 

list_3 ?

# 6. how to list all of the files in a directory? by mask? recursively? what methods to you know?