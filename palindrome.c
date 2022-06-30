#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p,*p1,*p2,*p3;
	int i,l=0,n,j=0,flag=0,n1,l1=0,k=0;
	printf("Enter the size");
	scanf("%d",&n);
	p=(char*)malloc((n)*sizeof(char));
	p1=(char*)malloc((n)*sizeof(char));
	printf("Enter %d string:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",p+i);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l++;
	}
	for(i=l-1;i>=0;i--)
	{
		*(p1+j)=*(p+i);
		j++;
	}
	*(p1+j)='\0';
	puts(p1);
	for(i=0,j=0;*(p+i)!='\0',*(p1+j)!='\0';i++,j++)
	{
			if(*(p+i)!=*(p1+j))
			flag=1;
	}
	if(flag!=1)
	printf("It is a palindrome string\n");
	else
	{	
	printf("It is not a palindrome string");
	}
	printf("\n");
	printf("Enter the size\n");
	scanf("%d",&n1);
	p2=realloc(p,n1*sizeof(int));
	p3=realloc(p1,n1*sizeof(int));
	printf("\n");
	printf("Enter %d string:\n",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%s",p+i);
	}
	for(i=0;*(p2+i)!='\0';i++)
	{
		l1++;
	}
	for(i=l1-1;i>=0;i--)
	{
		*(p3+k)=*(p2+i);
		k++;
	}
	*(p3+k)='\0';
	puts(p3);
	for(i=0,k=0;*(p2+i)!='\0',*(p3+k)!='\0';i++,k++)
	{
			if(*(p2+i)!=*(p3+k))
			flag=1;
	}
	if(flag!=1)
	printf("It is a palindrome string\n");
	else
	printf("It is not a palindrome string\n");
	free(p2);
	free(p3);
}