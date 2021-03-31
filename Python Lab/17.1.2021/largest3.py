Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> num1 = float(input("enter the 1st number:"))
enter the 1st number:22
>>> num2 = float(input("enter the 2nd number:"))
enter the 2nd number:55
>>> num3 = float(input("enter the 3rd number:"))
enter the 3rd number:34
>>> if (num1 > num2) and (num1 > num3):
	largest = num1
elif (num2 > num1) and (num2 > num3):
	largest = num2
else:
	largest = num3

	
>>> print("the largest number is",largest)
the largest number is 55.0
>>> 