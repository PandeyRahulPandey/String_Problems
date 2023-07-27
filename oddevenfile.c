#include<stdio.h>
void main()
{
    int n;
    FILE *p,*q,*r;
    p=fopen("abc.txt","w");
    printf("press -1 to exit:");
    printf("enter the number:");
    scanf("%d",&n);
    while(n)
    {
        if (n==-1)
        break;
        putw(n,p);
        scanf("%d",&n);
    }
    fclose(p);
    p=fopen("abc.txt","r");
    q=fopen("odd.txt","w");
    r=fopen("even.txt","w");
    while((n=getw(p))!=EOF)
    {
        if (n%2==0)
        putw(n,q);
        else
        putw(n,r);
    }
    fclose(p);
    fclose(q);
    fclose(r);
}

