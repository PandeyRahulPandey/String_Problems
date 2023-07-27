#include<stdio.h>
void main()
{
    int a[50], n,i,j,t;
    printf("how many elements you want to input in the array:");
    scanf("%d",&n);
    printf("entet the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
printf("\nRahul Pandey,sectionN,Roll No 49");
}