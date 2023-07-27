#include<stdio.h>
#include<string>
void main()
{
    char a[20],*b;
    b=a;
    int l,i,t;
    printf("enter the string:");
    gets(a);
    puts(a);
    l=strlen(a);
    for (i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=t;
    }
    puts(a);
    if(*b==a)
    printf("the string is palindrome:");
    else
    printf("the string is not palindrome:");
}