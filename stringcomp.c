#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[20];
    int l2,l1,i,flag;
    printf("enter the first string:");
    gets (a);
    puts(a);
    printf("enter the second string:");
    gets(b);
    puts(b);
    l1=strlen(a);
    l2=strlen(b);
    if (l1==l2)
    {
    printf("strings are comparable:");
    for (i=0;i<l1;)
    {
       flag=1;
        if (a[i]==b[i])
        {
            i++;
        }
        else 
        flag=0;
        break;
    }
    if (flag==1)
    printf("strings are same:");
    else 
    printf("strings are not same:");
    }
    else
    printf("strings are not comparable:");
}