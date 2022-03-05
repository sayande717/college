'''
Formulae:
s = (a+b+c)/2
Area = s(s-a)*(s-b)*(s-c)
'''
#Input
print('Enter length of sides')
a=float(input('Side 1: '))
b=float(input('Side 2: '))
c=float(input('Side 3: '))
#Calculation
s=(a+b+c)/2.0
area=s*(s-a)*(s-b)*(s-c)
#Output
print('Area: ',area)