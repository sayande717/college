for i in range(100,200):
    num = i
    sum = 0
    while num != 0:
        mod = num % 10
        sum = sum + mod
        num = int(num/10)
    if sum % 2 == 0:
        print(i,end=' ')