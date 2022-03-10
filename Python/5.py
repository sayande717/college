a = []
prod = 1
lenlist = int(input('Enter length of list: '))
for i in range (lenlist):
    a.append(int(input('Enter element: ')))
    prod = prod * a[i]
print('Product:',prod)