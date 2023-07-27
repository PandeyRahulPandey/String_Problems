#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,num,max,r,new;
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
    printf("\nenter the new size:");
    scanf("%d",&new);
    p=(int*) realloc (p,new*sizeof (int));
     printf("input num:");
    scanf("%d",&num);
    max=num;
    while(new-1!=0)
    {
        printf("input r:");
        scanf("%d",&r);
        if (r>max)
        max=r;
        new--
        ;
    }
    printf("%d",max);
    free(p);
}

