list = []
n = int(input('Enter the number of elements: '))
print('Enter elements: ')
for i in range (n):
    list.append(int(input()))
pos = int(input('Enter position where you want to insert element: '))
if pos > n:
    print('Position cannot be greater than no. of elements.')
else:
    num = int(input('Enter the element: '))
    list.insert(pos-1,num)
print('List: ',list)