#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p,*p1;
	int i,l=0,n,l1=0,j=0,l3=0;
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
	for(i=0;i<n;i++)
	{
		scanf("%s",p1+i);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l++;
	}
	for(j=0;*(p1+j)!='\0';j++)
	{
		l1++;
	}
	l3=l+l1;
	for(i=0;*(p+i)!='\0';i++,l3++)
	{
		*(p1+l3)=*(p+i);
	}
	*(p1+l3)='\0';
	puts(p1);
}