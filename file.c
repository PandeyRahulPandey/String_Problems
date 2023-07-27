#include<stdio.h>
void main()
{
    FILE *p,*q;
    char ch;
    p=fopen("abc.txt","w");
    printf("enter the characters:");
    scanf("%c",&ch);
    while(ch!=EOF)
    {
        putc(ch,p);
        scanf("%c",&ch);
    }
    fclose(p);
    q=fopen("xyz.txt","w");
    while(ch!=EOF)
    {
        if (ch==' ')
        continue;
        else 
        putc(ch,q);
    printf("%c",ch);
    }
    fclose(q);
}