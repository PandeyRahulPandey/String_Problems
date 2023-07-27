#include<stdio.h>
void maxi(int,int*);
int main()
{
    int n,max;
    printf("enter the value of n:");
    scanf("%d",&n);
    maxi(n,&max);
    printf("%d",max);
}
void maxi(int r,int*p)
{
    int num,t;
    printf("enter a number:");
    scanf("%d",&num);
    *p=num;
    int i;
    for (i=0;i<r-1;i++)
    {
        printf("enter the number:");
        scanf("%d",&t);
        if (t>*p)
        *p=t;
    }

}