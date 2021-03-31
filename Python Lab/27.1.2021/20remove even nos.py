Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> l1 = [11, 22, 33, 44, 55,66,77]
>>> print(l1)
[11, 22, 33, 44, 55, 66, 77]
>>> for i  in l1:
	if(i%2 == 0):
		l1.remove(i)

		
>>> print("list after removing EVEN numbers:")
list after removing EVEN numbers:
>>> print(l1)
[11, 33, 55, 77]
>>> 