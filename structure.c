#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    char month[20];
    int year;
};
void main() 
{
    struct date d;
    printf("enter the day,year:");
    scanf("%d%d",&d.day,&d.year);
    printf("enter the month:\n");
    gets(d.month);
    printf("%s\n",d.month);
    printf("%d\n",d.day);
    printf("%d\n",d.year);

}    
