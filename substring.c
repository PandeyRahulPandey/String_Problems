#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[20],c[130];
    int i,l1,l2,k,t;
    printf("enter the first string:");
    gets(a);
    puts(a);
    printf("enter the second string:");
    gets(b);
    puts(b);
    l1=strlen(a);
    l2=strlen(b);
    printf("enter the value of k:");
    scanf("%d",&k);
    t=k;
    for (i=0;i<k;i++)
    {
        c[i]=a[i];
    }
    int m=0;
    for (i=k;i<(l2+k);i++)
    {
        c[i]=b[m];
        m++;
    }
    for (i=t+l2;i<=(l1+l2);i++)
    {
        c[i]=a[k];
        k++;
    }
    puts(c);
    
}