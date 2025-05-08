// Print Using functions Factorial of Given Array Element 
//passing Individual arrays elements as Arguments
#include<stdio.h>
void fact(int);
main()
{
	int a[100],n;
	printf("enter n value:");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("enter integer:");
		scanf("%d",&a[i]);
		fact(a[i]);
	}
}
void fact(int n)
{
	int fact=1,i=1;
/*	for(int i=1;i<=n;i++)
	{
		fact = fact*i;
	} */
	while(i<=n)
	{
		fact = fact*i;
		i++;
		
	}
	printf("%d\n",fact);	
}

