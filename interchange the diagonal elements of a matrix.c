#include<stdio.h>
void main()
{
	int a[3][3],i,temp=0,j;
	printf("enter the elements of matrix:");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
	    {
			scanf("%d",&a[i][j]);
	    }
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i==j)
			{
				temp=a[i][j];
				a[i][j]=a[i][3-(j+1)];
				a[i][3-(j+1)]=temp;
			}
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}

}