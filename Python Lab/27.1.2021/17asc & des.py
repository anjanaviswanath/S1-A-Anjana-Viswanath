Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import operator
>>> a = {1: 2, 3: 4, 4: 3, 2: 1, 0: 0}
>>> print('Original dictionary : ',a)
Original dictionary :  {1: 2, 3: 4, 4: 3, 2: 1, 0: 0}
>>> sorted_a = sorted(a.items(), key=operator.itemgetter(1))
>>> print('ascending order  : ',sorted_a)
ascending order  :  [(0, 0), (2, 1), (1, 2), (4, 3), (3, 4)]
>>> sorted_a = dict( sorted(a.items(), key=operator.itemgetter(1),reverse=True))
>>> print('descending order  : ',sorted_a)
descending order  :  {3: 4, 4: 3, 1: 2, 2: 1, 0: 0}
>>> 