#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i,j,*p,m,n;
	printf("Enter the no of rows and columns of the matrix:");
	scanf("%d%d",&m,&n);
	p=(int*)malloc((m*n)*sizeof(int));
	printf("\nEnter %dX%d matrix elements:",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("\n%d",p+(i*m+j));
		}
	}
	printf("The martix is:");
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(p+(i*m+j)));
		}
		printf("\n");
	}
	printf("The lower traingular martix is:");
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
			printf(" ");
			}
			else
			{
			printf("%5d",*(p+(i*m+j)));
			}
		}
		printf("\n");
	}
}