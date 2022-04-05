def recursive(n):
    print(n)
    if n < 0:
        return
    elif n == 0:
        return 0
    return recursive(n-1)

n = int(input('Enter a number: '))
recursive(n)