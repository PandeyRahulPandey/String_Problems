#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[10],*p,*q;
    int l1,l2,i;
    p=a;q=b;
    printf("enter the first string:");
    gets(a);
    l1=strlen(a);
    printf("enter the second string:");
    gets(b);
    l2=strlen(b);
    for (i=0;i<l2;i++)
    {
        *(p+i)=*(q+i);
    }
    *(p+i)='\0';
    puts(p);
}