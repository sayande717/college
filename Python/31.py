def fibo(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibo(n-1)+fibo(n-2)

n = int(input('Enter a positive integer: '))
print('Fibonacci number at position',n,':',fibo(n))