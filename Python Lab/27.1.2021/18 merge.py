Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def Merge(a, b):
	return(b.update(a))

>>> a = {'a': 20, 'b': 30}
>>> b = {'d': 10, 'c': 25}
>>> print(Merge(a, b))
None
>>> print(b)
{'d': 10, 'c': 25, 'a': 20, 'b': 30}
>>> 