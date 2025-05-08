// Print Using functions Given Array Element is Even or Odd
//passing Individual arrays elements as Arguments

#include<stdio.h>
void evenodd(int);
main()
{
	int a[100],n;
	printf("enter n value:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter integer:");
		scanf("%d",&a[i]);
		evenodd(a[i]);
	}
}
void evenodd(int n)
{
	if(n%2 == 0)
			printf("Even\n");
	else
		printf("Odd\n");	
}

