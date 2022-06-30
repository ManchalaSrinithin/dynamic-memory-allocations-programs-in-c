#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p,*p1;
	int i,l=0,n,j=0,flag=0,n2,l1=0,k=0,l2=0,*p2,*p3,l3=0;
	printf("Enter the size");
	scanf("%d",&n);
	p=(char*)malloc((n)*sizeof(char));
	p1=(char*)malloc((n)*sizeof(char));
	printf("\nEnter the string:");
	for(i=0;i<n;i++)
	{
		scanf("%s",p+i);
	}
	printf("Enter another string:\n");
	for(j=0;j<n;j++)
	{
		scanf("%s",p1+j);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l++;
	}
	for(j=0;*(p1+j)!='\0';j++)
	{
		l1++;
	}
	for(i=0,j=0;*(p+i)!='\0',*(p1+j)!='\0';i++,j++)
	{
			if(*(p+i)==*(p1+j))
			flag=1;
			else
			flag=0;
	}
	if(flag==1)
	printf("Both strings are equal");
	else
	{
	printf("both strings are not equal");
	}
	printf("\n");
	printf("Enter the size\n");
	scanf("%d",&n2);
	p2=realloc(p,(n2)*sizeof(int));
	p3=realloc(p1,(n2)*sizeof(int));
	for(i=0;i<n2;i++)
	{
		scanf("%s",p2+i);
	}
	printf("Enter another string:\n");
	for(k=0;k<n2;k++)
	{
		scanf("%s",p3+k);
	}
	for(i=0;*(p2+i)!='\0';i++)
	{
		l2++;
	}
	for(k=0;*(p3+k)!='\0';k++)
	{
		l3++;
	}
	for(i=0,k=0;*(p2+i)!='\0',*(p3+k)!='\0';i++,k++)
	{
			if(*(p2+i)==*(p3+k))
			flag=1;
			else
			flag=0;
	}
	if(flag==1)
	printf("Both strings are equal\n");
	else
	{
	printf("both strings are not equal\n");
	}
	free(p2);
	free(p3);
}