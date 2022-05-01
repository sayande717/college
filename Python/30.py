year = int(input('Enter a year: '))
flag = 0
if year%4 == 0:
    if year%100 == 0:
        if year%400 == 0:
            flag = 1
    else:
        flag = 1
if flag == 1:
    print(year,'is a leap year.')
else:
    print(year,'is not a leap year.')