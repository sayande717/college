m1=[[2,3,4],
    [5,6,7],
    [9,12,19]]

m2=[[9,8,7],
    [6,5,4],
    [3,2,1]]

answer=[[0,0,0],
       [0,0,0],
       [0,0,0]]

for i in range (3):        #Range: Row of m1
    for j in range (3):    #Range: Column of m2
        for k in range(3): #Range: Row of m2
            answer[i][j] = answer[i][j] + (m1[i][k] * m2[k][j])

print('Answer:')
for i in range(3):
    for j in range(3):
        print(answer[i][j],end=' ')
    print()