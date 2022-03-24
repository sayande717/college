a = []
s = 0
lenlist = int(input('Enter length of list: '))
for i in range (lenlist):
    a.append(float(input('Enter element: ')))
    s = s + a[i]
print('Average:',int(s/lenlist))