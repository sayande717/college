//Program to calculate V=U+FT when any one of the parameters are given.
#include <stdio.h>
void main()
{
    char n;
    float v,u,f,t;
    printf("Enter the parameter you want to find, out of v=u+ft:");
    scanf("%c", &n);
    if (n=='v'||n=='V')
    {
        printf("Enter u:");
        scanf("%f",&u);
        printf("Enter f:");
        scanf("%f",&v);
        printf("Enter t:");
        scanf("%f",&t);
        v=u+(f*t);
        printf("v = %f",v);
    }
    else if (n=='u'||n=='U')
    {
        printf("Enter values of v,f,t\n");
        scanf("%f%f%f",&v,&f,&t);
        u=v-(f*t);
        printf("u = %f",u);
    }
    else if (n=='f'||n=='F')
    {
        printf("Enter values of v,u,t\n");
        scanf("%f%f%f",&v,&u,&t);
        f=(v-u)/t;
        printf("f = %f",f);
    }
    else if(n=='t'||n=='T')
    {
        printf("Enter values of v,u,f\n");
        scanf("%f%f%f",&v,&u,&f);
        t=(v-u)/f;
        printf("t = %f",t);
    }
}