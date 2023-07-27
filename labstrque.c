#include<stdio.h>
#include<string.h>
int flag;
struct student
{
    char name [200];
    int rollno;
};
void main()
{
    struct student a,b;
    int i,l1,l2;
    printf("enter the first string:");
    gets(a.name);
    l1=strlen(a.name);
    printf("enter the second string:");
    gets(b.name);
    l2=strlen(b.name);
    printf("enter the first number:");
    scanf("%d",&a.rollno);
    printf("enter the second number:");
    scanf("%d",&b.rollno);
    if (l1!=l2)
    printf("not comparable\n");
    else 
    {
        for (i=0;i<l1;i++)
        {
            flag=0;
            if (a.name[i]!=b.name[i])
            flag++;
            break;
        }
        if (flag==0)
        printf("same\n");
        else
        printf("not same\n");
    }
    if (a.rollno==b.rollno)
    printf("same\n");
    else
    printf("not same\n");
}
