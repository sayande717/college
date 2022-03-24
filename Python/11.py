c = 0
p = 1.0
a = int(input('Enter the total number of elements: '))
while c<a:
    x = int(input('Enter the elements: '))
    c = c + 1
    p = p * x
gm = p ** (1.0/a)
print('The Geometric Mean is: ',gm)