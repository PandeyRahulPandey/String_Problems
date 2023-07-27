#include<stdio.h>
int n,i,j,r;
printf("enter the value of n:");
scanf("%d",&n);
struct student
{
    char name[20];
    char sec;
    int roll;
    int m[4];
    float per;
};
struct student stu[n];
void main()
{
    for (i=0;i<n;i++)
    {
       printf("enter the section,roll");
       scanf("%c%d",&stu[i].sec,&stu[i].roll);
       printf("enter name :");
       gets(stu[i].name);
       printf("enter the marks of four subjects:");
       for(j=0;j<4;j++)
       {
           scanf("%d",&stu[i].m[j]);
       }
    }
    for(i=0;i<n;i++)
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
    for (i=0;i<n;i++)
    {
         r=i;
        if (stu[i].per>max)
        max=stu[i].per;
    }
    printf("%s%c%d%d",stu[r].name,stu[r].sec,stu[r].roll,stu[r].per);
}
