#include<stdio.h>
int fun(char[],char[]);
void main()
{
    int r;
    char a[40],b[40];
    printf("entter the first string:\n");
    gets(a);
    printf("enter the second string:\n");
    gets(b);
    r=fun(a,b);
    printf("%d",r);
}
    int fun(char p[50],char q[50])
    {
        int i,j,l1,l2,flag=0;
        l1=strlen(p),l2=strlen(q);
        for (i=0,j=0;i<l1,j<l1;i++,j++)
        {
            if(p[i]!=q[j])
            flag++;
        }
        if (flag==0)
        return 1;
        else 
        return 0;

    }
