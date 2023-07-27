#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[12];
    int l1,l2,i,j,k,r,t;
    printf("enter the first string:");
    gets(a);
    puts(a);
    printf("enter the second string:");
    gets(b);
    puts(b);
    l1=strlen(a);
    l2=strlen(b);
    printf("enter the value of k:");
    scanf("%d",&k);
    t=k;
    for(i=0;i<l2;i++) 
    {
        for (j=l1;j>=k;j--) 
        {
            a[j+1]=a[j];
        }
        l1++;
        k++;
    }
    int m=0;
    for  (i=t;i<(l2+t);i++)
    {
        a[i]=b[m];
        m++;
    }
    puts(a);
}