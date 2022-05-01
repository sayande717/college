m1=[[2,3,4],
    [5,6,7],
    [9,12,19]]

m2=[[10,11,12],
    [21,22,23],
    [34,35,36]]

answer=[[0,0,0],
       [0,0,0],
       [0,0,0]]

for i in range (3):
    for j in range (3):
        answer[i][j]=m1[i][j]+m2[i][j]

print('Answer:')
for i in range(3):
    for j in range(3):
        print(answer[i][j],end=' ')
    print()
