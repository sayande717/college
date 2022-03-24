n = int(input('Enter a number: '))
sum = 0
while n != 0:
    mod = n % 10
    sum = sum + mod
    n = int(n/10)
print('Sum of digits: ',sum)