Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> l1 = [2,4,6,8,10,12,12,15,18,20]
>>> l2 = [1,3,5,7,9,10,11,13,14,12]
>>> length1=len(l1)
>>> length2=len(l2)
>>> if length1 == length2 :
	print('both have equal length')
else:
	print('both doesnot have equal length')

	
both have equal length
>>> a=[2,4,6,8,10,9,7,6,5,1]
>>> b=[1,2,6,4,5,6,7,8,9,10]
>>> totala=sum(a)
>>> totalb=sum(b)
>>> if totala == totalb :
	print('both have equal sum')
else:
	print('both doesnot have equal sum')

	
both have equal sum
>>> for value in l1:
	if value in l2:
		common=1

		
>>> if common==1:
	print("there are common elements")
else:
	print("no common elements")

	
there are common elements
>>> 