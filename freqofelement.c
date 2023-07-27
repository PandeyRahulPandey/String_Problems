#include<stdio.h>
void main()
{
    int a[100],i,j,n,t,index;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for (int m=0;m<n;)
    {
        int count=1;
        for (int s=m+1;s<n;s++)
        {
            if (a[m]==a[s])
            {
            count++;
            }
        }
        index=m;
        m=m+count;
        printf("\nthe freq of %d is %d\n",a[index],count);
    }
}
        
    
