#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i,j,*p,m,n,l=0,s,n1,n2,n3,n4;
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
	s=*p;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+(i*m+j))>l)
			{
				l=*(p+(i*m+j));
				n1=i;
				n2=j;
			}
			if(*(p+(i*m+j))<s)
			{
				s=*(p+(i*m+j));
				n3=i;
				n4=j;
			}
		}
	}
	l=sqrt(l);
	s=s*s;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(p+(n1*m+n2))=l;
			*(p+(n3*m+n4))=s;	
		}
	}
	printf("\nThe matrix after change is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(p+(i*m+j)));
		}
		printf("\n");
	}
	
}