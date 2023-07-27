#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[10];
    int i,r,l;
    printf("enter the first string:");
    gets(a);
    printf("enter the second string:");
    gets(b);
    puts(a);
    puts(b);
    r=strlen(a);
    l=strlen(b);
    printf("%d\n%d\n",r,l);
    for (i=0;i<l;i++)
    {
        a[r+i]=b[i];
    }
    a[r+l]='\0';
    puts(a);
    
}