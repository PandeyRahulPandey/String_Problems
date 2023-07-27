#include<stdio.h>
#include<string.h>
int fun(char[],char[]);
void main()
{
    int l;
    l=fun("dehradun","dun");
    if (l==-1)
    printf("substring not found");
    else 
    printf("substring found at index %d",l);
}
int fun(char p[],char q[])
{
    int i,j,k,l;
    l=strlen(q);
    for (i=0;p[i+l-1];i++)
    {
        k=i;
        for (j=0;j<l;j++)
        {
            if (p[k]!=q[j])
            break;
            k++;
        }
        if (j==l)
        return (i);

    }
      return (-1);
}
