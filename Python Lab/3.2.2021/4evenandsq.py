def perfectSquares(l, r):
    for i in range(l, r + 1):
        if (i**(.5) == int(i**(.5))):
            print(i, end=" ")
l = 1000
r = 10000 - 1
perfectSquares(l, r)