#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[10];
    int i,r,l,m=1;
    printf("enter the first string:");
    gets(a);
    printf("enter the second string:");
    gets(b);
    puts(a);
    puts(b);
    r=strlen(a);
    l=strlen(b);
    if (r==l)
        printf("strings are comparable:");
    else
        printf("strings are not comparable:");
    for (i=0;i<l;)
    {
         if (a[i]==b[i])
         i++;
         else 
         m--;
    }
     
     if (m==1)
     printf("the strings are same:");
     else
     printf("strings are not same:");
} 