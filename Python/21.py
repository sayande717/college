n = int(input('Enter the number of elements: '))
a = []
flag = 0
print('Enter elements: ')
for i in range (n):
    a.append(int(input()))

sno = int(input('Enter number to search: '))

for i in range (n):
    if sno == a[i]:
        flag = 1
        break
if flag == 0:
    print('Number not found.')
else:
    print('Number found at location',(i+1))