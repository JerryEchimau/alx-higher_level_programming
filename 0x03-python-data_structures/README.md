# 0x03. Python - Data Structures: Lists, Tuples
In this project, I learnt data structures in Python, specifically Lists and Tuples

Here is a breakdown of the tasks in the project:

## Tasks :clipboard:
### 0. Print a list of integers
- Learnt how to iterate over a list
- [0-print_list_integer.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/0-print_list_integer.py): iterates over a list and print them

### 1. Secure access to an element in a list
- Learnt how to access a specific element in a list
- [1-element_at.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/1-element_at.py): retrieves an elemnt in a list

### 2. Replace element
- Learnt how to change an element in a list
- [2-replace_in_list.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/2-replace_in_list.py): changes an element at index of a list

### 3. Print a list of integers... in reverse!
- Learnt how to reverse a list using ``reverse()``
- Learnt to use ``isinstance()`` to check whether the argument is a list
- [3-print_reversed_list_integer.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/3-print_reversed_list_integer.py): reverses a list and prints the reversed list

### 4. Replace in a copy
- Learnt how to copy a list and manipulate the copied list
- [4-new_in_list.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/4-new_in_list.py): replaces an element in a list without affecting the original list

### 5. Can you C me now?
- Learnt ow to remove certain chars in a string using ``char for char in string if char not in 'cC'``
- [5-no_c.py]( https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/5-no_c.py): removes c and C from a string

### 6. Lists of lists = Matrix
- Learnt about rows in a list and how to use ``str.join()``
- [6-print_matrix_integer.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/6-print_matrix_integer.py): prints a mtrix of integers

### 7. Tuples addition
- Learnt about adding tuples
- [7-add_tuple.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/7-add_tuple.py): adds tuples with two elements

### 8. More returns!
- Learnt about getting len of a tupple and accessing elements from a tupple
- [8-multiple_returns.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/8-multiple_returns.py): returns a tuple with the length of a string and its first character.

### 9. Find the max
- Learnt to find the maximum without using ``max()``
- did this by iterating thorugh every variable in the list and comparing it with a preassigned max value
- [9-max_integer.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/9-max_integer.py): finds the biggest integer of a list

### 10. Only by 2
- Learnt to use modular in python in a list
- [10-divisible_by_2.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/10-divisible_by_2.py): finds all multiples of 2 in a list

### 11. Delete at
- Learnt how to use ``del`` to remove an element from a list
- [11-delete_at.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/11-delete_at.py): deletes an item at a specific position

### 12. Switch
- Learnt how to switch values
- [12-switch.py](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/12-switch.py): switches values given

### 13. Linked list palindrome
- This is a C Technical interview preparation question on writing a function that checks if a single linked list is a palindrome
- This is how I handled it:
	- iterated over the list using ``slow`` and ``fast`` variables to get the middle of the list
	- split the list into 2 (first half and second half to compare)
	- compared the two lists using a function I wrote
	- recombined and recreated the original list
	- returned 1 if palindorme and 0 if not
	- this works in linear time O(n) and O(1) space
- [13-is_palindrome.c](https://github.com/JerryEchimau/alx-higher_level_programming/blob/master/0x03-python-data_structures/13-is_palindrome.c): C program that checks if a sinle linked list is a palindrome

### 14. CPython #0: Python lists
- To be reviewed as I do not fully understand the concept
