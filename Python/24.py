list = []
largest = 0
n = int(input('Enter the number of elements: '))
print('Enter elements: ')
for i in range (n):
    list.append(int(input()))
    if list[i] > largest:
        largest = list[i]
print('Largest number:',largest)