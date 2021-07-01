/* Matrix multiplication */
#include<stdio.h>
#include<limits.h>
int main()
{
  Variable description - 
  r1,c1 = number of rows and columns of the first matrix.
  r1,c2 = number of rows and columns of the second matrix.
  
  int n1,n2;
  int a1[INT_MAX][INT_MAX], a2[INT_MAX][INT_MAX], a3[INT_MAX][INT_MAX];
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &r1,&c1);
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements:\nMatrix 1");
    printf("Enter elements of first matrix\n");
  for (r1 = 0; r1 < m; r1++)
    for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
	scanf("%d", &b[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
	mul[c][d]=0;
        for (k = 0; k < p; k++) {
	  mul[c][d] = mul[c][d] + a[c][k]*b[k][d];
        }
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
	printf("%d\t", mul[c][d]);
 
      printf("\n");
    }
  }
  return 0;
}