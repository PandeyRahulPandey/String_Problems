#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *p,*q;
    int i,j,l1,l2,n;
    
    n=100;
    
    p=(char*) malloc (n*sizeof (char));
    printf("enter the first string:\n");
    gets(p);
    
    
    q=(char*) malloc (n*sizeof (char));
    printf("enter the second string:\n");
    gets(q);
    l2=strlen(q);
    for (i=0;i<l2;i++)
    {
        *(p+i)=*(q+i);
    }
    *(p+i)='\0';
    puts(p);
    free(p);
    free(q);
}



