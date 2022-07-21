list = []
n = int(input('Enter the number of elements: '))
print('Enter elements: ')
for i in range (n):
    list.append(int(input()))
index = int(input('Enter position of element you want to delete: '))
if index >= n:
    print('Index cannot be more than the number of elements.')
else:
    list.pop(index-1)
print('List: ',list)