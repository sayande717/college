N = int(input('Enter the last element in the range: '))
for i in range (1,N+1):
    counter = 0
    for j in range (1,i):
        if i % j == 0:
            counter = counter + 1
    if counter == 1:
        print(i,end=' ')