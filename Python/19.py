def factorial(n):
    return n*factorial(n-1)

n = int(input('Enter a number: '))

if n < 0:
    print('Factorial of negative number not possible.')
elif n == 1 or n == 0:
    print('Factorial of n is 1.')
else:
    print('Factorial of ',n,'is',factorial(n))