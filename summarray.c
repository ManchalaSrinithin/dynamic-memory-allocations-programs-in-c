#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,*p,n,sum=0;
	printf("Enter the no of elements in the array:");
	scanf("%d",&n);
	p=(int*)malloc((n)*sizeof(int));
	printf("\nEnter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",p+i);
	}
	printf("The element are:");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\n%5d",*(p+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);	
	}
	printf("\n");
	printf("The sum of the elements in the array is:%d\n",sum);
}