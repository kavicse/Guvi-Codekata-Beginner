#include<stdio.h>
void main()
{
    int i,f=1,num;
    printf("Enter number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}