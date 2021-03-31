Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> str = "Welcome"
>>> print("String is: \n",str)
String is: 
 Welcome
>>> vowels = "AEIOUaeiou"
>>> res = set([each for each in str if each in vowels])
>>> print("vowels present in the string are:\n",res)
vowels present in the string are:
 {'e', 'o'}
>>> 