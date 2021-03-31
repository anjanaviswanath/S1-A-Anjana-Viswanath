Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> a=['anju','achu','ammu','abhi','allu']
>>> strg=(''.join(a))
>>> count=0
>>> for i in strg:
	if i == 'a':
		count = count + 1

		
>>> print ("a in the list is : " +str(count))
a in the list is : 5
>>> 