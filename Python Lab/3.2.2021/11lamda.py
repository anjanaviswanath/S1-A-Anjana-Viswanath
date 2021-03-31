import math
print("enter the length of a side of square: ")
s = int(input("enter yor value: "))
print("enter length and breadth of rectangle: ")
l = int(input("enter your value: "))
b = int(input("enter your value: "))
print("enter the base and height of triangle: ")
h = int(input("enter the value: "))
d = int(input("enter the value: "))
x = lambda s : s * s
y = lambda l, b : l * b
t = 0.5
z = lambda h, d, t : h * d * t
print("area of square: ", x(s))
print("area of rectangle: ", y(l,b))
print("area of triangle: ", z(h,d,t))