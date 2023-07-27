#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[10],c[30];
    int i,l1,l2;
    printf("enter the first string:");
    gets(a);
    puts(a);
    printf("enter the second string:");
    gets(b);
    puts(b);
    l1=strlen(a);
    l2=strlen(b);
    for (i=0;i<l1;i++)
    {
        c[i]=a[i];
    }
    int m;
    for (i=l1,m=0;i<l1+l2,m<l2;i++,m++)
    {
        c[i]=b[m];
    }
    c[l1+l2]='\0';
    puts(c);
}