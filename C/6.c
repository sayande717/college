//Program to print the fibonacci series.
#include <stdio.h>
void main()
{
    int n, i, ti = 0, tf = 1, s;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", ti);
        printf("\n");
        s = ti + tf;
        ti = tf;
        tf = s;
    }
}