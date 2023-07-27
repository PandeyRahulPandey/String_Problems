`#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe swapped values are:a=%d,b=%d",a,b);
}