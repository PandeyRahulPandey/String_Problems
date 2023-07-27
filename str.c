#include<stdio.h>
int i,j,r;
struct student
{
    char name[20];
    char sec;
    int roll;
    int m[4];
    float per;
};
void main()
{
struct student stu[5];

    for (i=0;i<5;i++)
    {
       printf("enter the section & roll\n");
       scanf("%c%d",&stu[i].sec,&stu[i].roll);
       printf("enter name :\n");
       gets(stu[i].name);
       printf("enter the marks of four subjects:");
       for(j=0;j<4;j++)
       {
           scanf("%d",&stu[i].m[j]);
       }
    }
    for(i=0;i<5;i++)
    {
        int sum=0;
        for(j=0;j<4;j++)
        {
            sum=sum+stu[i].m[j];
        }
        stu[i].per=(sum*100)/4;
    }
    int max;
    max=stu[0].per;
    for (i=0;i<5;i++)
    {
        if (stu[i].per>max)
        {
        r=i;
        max=stu[i].per;
        }
    }
    printf("%s%c%d%d",stu[r].name,stu[r].sec,stu[r].roll,stu[r].per);
}
