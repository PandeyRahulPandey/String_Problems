#include<stdio.h>
void main()
{
    int a[20],i,j,n,count,max=0,t;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("\nenter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        count=1;
        for (j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            count++;
        if (count>max)
        t=a[j];
        }
    }
    printf("the majority element of the array is:%d\n",t);        
    
}