#include<stdio.h>
main()
{
	int i,j,m,n,m1,n1,*p,*p1,*p2;
	printf("Enter no.of rows and columns in I-matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter no.of rows and columns in II-matrix:");
	scanf("%d%d",&m1,&n1);
	p=(int*)malloc((m*n)*sizeof(int));
	p1=(int*)malloc((m1*n1)*sizeof(int));
	p2=(int*)malloc((m1*n1)*sizeof(int));
	if(m==m1)
	{
	printf("Enter %dX%d matrix values are:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p+(i*m+j));
		}
		printf("\n");
	}
	printf("Enter %dX%d II-matrix values are:\n",m1,n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",p1+(i*m1+j));
		}
		printf("\n");
	}
	printf("matrix-I values are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(p+(i*m+j)));
		}
		printf("\n");
	}
	printf("second matrix values are:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%5d",*(p1+(i*m1+j)));
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				*(p2+(i*m+j))=*(p+(i*m+j))+*(p1+(i*m1+j));
		}
		printf("\n");
	}
	printf("%dX%d addition matrix values are\n",m,n);
		for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
		{
			printf("%5d",*(p2+(i*m+j)));
		}
		printf("\n");
	}
}
	else
	printf("Enter correct order of the matrix");
}
