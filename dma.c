#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,num,max,r;
    printf("input n:");
    scanf("%d",&n);
    p=(int*) malloc (n*sizeof (int));
    printf("input num:");
    scanf("%d",&num);
    max=num;
    while(n-1!=0)
    {
        printf("input r:");
        scanf("%d",&r);
        if (r>max)
        max=r;
        n--;
    }
    printf("%d",max);
    free(p);
}