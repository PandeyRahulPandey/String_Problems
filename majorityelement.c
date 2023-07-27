#include<stdio.h>
void main()
{
    int a[20],i,j,n,count,max=0,t,k;
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
        }
        if (count>max)
        {
         max=count;
          k=i;
        }
    }
    if (max>n/2)
    printf("\nfreq of majority element %d\n is %d\n",a[k],max);
    else 
    printf("no majority element:"); 
}