#include<stdio.h>
#include<limits.h>
#include<math.h>
#define MAX 10
int fnPlace(int K, int I, int X[10])
{
    for(int J=1;J<=K-1;J++)
    {
        if((X[J]==I)|| (abs(J-K)==abs(X[J]-1)))
            return 0;
    }
    return 1;
}
void fnQueens(int k, int N)
{
    int I,J,L;
    static int Count, X[10];
    for(I=1;I<=N;I++)
    {
        if(fnPlace(k,I,X))
        {
            X[k] = I;
            if(k==N)
            {
                printf("\nFeasible solution: %d",++Count);
                printf("\nSolutions are: ");
                for(J=1;J<=N;J++)
                    printf("%d",X[J]);
                for(J=1;J<=N;J++)
                {
                    printf("\n");
                    for(L=1;L<=N;L++)
                    {
                        if(L==X[J])
                            printf(" X ");
                        else
                            printf(" 0 ");
                    }
                }
                printf("\n");
            }
            else
                fnQueens(k+1,N);
        }
    }
}
int main()
{
    int No;
    printf("Enter the no of Queens: ");
    scanf("%d",&No);
    fnQueens(1,No);
    return 0;
}