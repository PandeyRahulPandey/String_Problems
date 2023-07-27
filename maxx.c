#include<stdio.h>
void main()
{
int max,i,n,num;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the value of num:");
scanf("%d",&num);
max=num;
int r;
for (i=0;i<n-1;i++)
{
    printf("enter the number:");
    scanf("%d",&r);
    if (r>max)
    max=r;
}
printf("%d",max);
}