def binsearch(arr,sno):
    arr.sort()
    first = 0
    last =  len(arr) - 1

    while first <= last:
        mid = int(first + last) / 2
        
        if (arr[mid] < sno):
            first = mid + 1
        elif arr[mid] > sno:
            last = mid - 1
        else:
            return mid
    return -1

size = int(input('Enter the number of elements: '))
a = []
flag = 0
print('Enter elements: ')
for i in range (size):
    a.append(int(input()))

sno = int(input('Enter number to search: '))
result = binsearch(a,sno)
if result != -1:
    print('Element found at position',(result+1))
else:
    print('Element not found.')