#include<stdio.h>
void largest(int,int,int,int*);
int  main()
{
   int a=10,b=5,c=4,max;
   largest(a,b,c,&max);
   printf("maximum number is:%d\n",max);
}
void largest(int p,int q,int r,int*m)
{
   if (p>q && p>r)
     *m=p;
     else if (q>p && q>r)
     *m=q;
     else
     *m=r;
}