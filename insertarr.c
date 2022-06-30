#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,*x,x1,pos,n,*p;
    p=(int*)malloc((n)*sizeof(int));
    x=&x1;
    printf("Enter any values:\n");
    scanf("%d",&n);
    printf("\nEnter %d values:",n);
    for (i=0;i<n;i++)
    {
    scanf("%d",p+i);
	}
    printf("Enter value to be inserted:");
    scanf("%d",x);
 	printf("Enter the position to be inserted:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
    {
	    *(p+i+1)=*(p+i);
	}
    *(p+(pos))=*x;
    for(i=0;i<=n;i++)
    printf("\n%d",*(p+i));
}