n = int(input('Enter a number: '))
num = n
sum = 0
while n != 0:
    mod = n % 10
    sum = sum + mod
    n = int(n/10)
counter = 0
for i in range (1,num):
    if num % i == 0:
        counter = counter + 1
if counter == 1:
    print(num,'is a prime number.')
else:
    print(num,'is not a prime number.')