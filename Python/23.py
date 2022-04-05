a = []
n = int(input('Enter the number of elements: '))
print('Enter elements:')
for i in range(n):
    a.append(int(input()))

print('Odd numbers: ',end='')
for i in range(len(a)):
    if a[i] % 2 != 0:
        print(a[i],end=' ')