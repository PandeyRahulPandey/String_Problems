//wap to delete n characters in string from a particular position.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,l,m,k,j,r;
    printf("enter the string:");
    gets(a);
    puts(a);
    l=strlen(a);
    r=l;
    printf("how many characters you want to delete:");
    scanf("%d",&m);
    printf("insert the position from where you want to start deletion:");
    scanf("%d",&k);
    for (i=0;i<m;i++)
    {
        for (j=k;j<l;j++)
        {
            a[j]=a[j+1];
        }
        l--;
    }
    a[r-m]='\0';
    puts(a);

}