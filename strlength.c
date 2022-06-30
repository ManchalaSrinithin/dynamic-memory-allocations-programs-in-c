#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p;
	int i,l=0,n,n2,l1=0;
	printf("Enter the size");
	scanf("%d",&n);
	p=(int*)malloc((n)*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%s",p+i);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l++;
	}
	printf("the length of the string is %d\n",l);
	printf("Enter the size");
	scanf("%d",&n2);
	p=realloc(p,(n2)*sizeof(int));
	for(i=0;i<n2;i++)
	{
		scanf("%s",p+i);
	}
	for(i=0;*(p+i)!='\0';i++)
	{
		l1++;
	}
	printf("the length of the string is %d\n",l1);	
}