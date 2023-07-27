#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],t,index;
    int l,i,j;
    printf("enter the string:");
    gets(a);
    l=strlen(a);
    for (i=0;i<l;i++)
    {
        for (j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    puts(a);
}