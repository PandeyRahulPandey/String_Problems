#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],t;
    int i,l;
    printf("enter the first string:");
    gets (a);
    puts(a);
    l=strlen(a);
    for (i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=t;
    }
    printf("%s",a);

}