Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def word_count(str):
	counts = dict()
	words = str.split()
	for word in words:
		if word in counts:
			counts[word] += 1
		else:
			counts[word] = 1
	return counts

>>> print(word_count('i am anjana viswanath.'))
{'i': 1, 'am': 1, 'anjana': 1, 'viswanath.': 1}
>>> 