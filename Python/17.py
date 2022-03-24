a = float(input('Enter the value of a: '))
if a == 0:
    print("Value of 'a' cannot be 0.")
else:
    b = float(input('Enter the value of b: '))
    c = float(input('Enter the value of c: '))
    x1 = -b + (b*b-4*a*c)**1/2 / (2*a)
    x2 = -b - (b*b-4*a*c)**1/2 / (2*a)
    print('Root 1: ',x1)
    print('Root 2: ',x2)