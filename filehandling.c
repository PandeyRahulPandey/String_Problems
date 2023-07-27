#include<stdio.h>
void main()
{
    FILE *p;
    char str[50],ch;
    p=fopen("abc.txt","w");
    printf("enter a character:");
    scanf("%c",&ch);
    while(ch!=EOF)
    {
        if(ch=='0')
            break;
        putc(ch,p);
        scanf("%c",&ch);
        
    }
    fclose(p);
    p=fopen("abc.txt","r");
    while((ch=getc(p))!=EOF)
    {
        printf("\n%c",ch);
    }
    fclose(p);
}