def print_factors(n):
    for i in range(1, n+1):
        if n % i == 0:
            print(i)
number = int(input("enter a number : "))
print("The factors for {} are : ".format(number))
print_factors(number)