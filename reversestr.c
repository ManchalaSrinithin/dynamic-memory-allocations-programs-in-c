#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p,*p1;
	int i,l=0,n,j=0,n2,l1=0,k=0;
	printf("Enter the size");
	scanf("%d",&n);
	p=(char*)malloc((n)*sizeof(char));
	for(i=0;i<n;i++)
	{
		scanf("%s",p+i);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l++;
	}
	p1=(char*)malloc((n)*sizeof(char));
	for(i=l-1;i>=0;i--)
	{
		*(p1+j)=*(p+i);
		j++;
	}
	*(p1+j)='\0';
	printf("Reverse of the string is:\n");
	puts(p1);
	printf("Enter the size");
	scanf("%d",&n2);
	p=realloc(p,(n2)*sizeof(int));
	p1=realloc(p1,(n2)*sizeof(int));
	for(i=0;i<n2;i++)
	{
		scanf("%s",p+i);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l1++;
	}
	for(i=l1-1;i>=0;i--)
	{
		*(p1+k)=*(p+i);
		k++;
	}
	*(p1+k)='\0';
	printf("Reverse of the string is:\n");
	puts(p1);
	free(p1);
	free(p);
}