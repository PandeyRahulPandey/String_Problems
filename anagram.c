#include<stdio.h>
#include<string.h>
void main()
{
    char a[200],b[200];
    int i,j,count=0,l1,l2,t;
    printf("enter the string:");
    gets(a);
    printf("enter the second string:");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    for (i=0;i<l1;i++)
    {
        for (j=i+1;j<l1;j++)
        {
            if (a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
            if (b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }

    }
    int flag=0;
    for (i=0;i<l1;i++)
    {
        if (a[i]!=b[i])
        flag++;
    }
    if (flag==0)
    printf("string is anagram:");
    else 
    printf("string is not anagram:");
}


    