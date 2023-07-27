#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,l1,l2;
    printf("enter the first string:");
    gets(a);
    puts(a);
    printf("enter the second string:");
    gets(b);
    puts(b);
    l1=strlen(a);
    l2=strlen(b);
    for (i=0;i<l2;i++)
    {
        a[i]=b[i];
    }
    a[l2]='\0';
    puts(a);
}