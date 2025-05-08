// Print Using functions Given Array Element is Prime or not
//passing Individual arrays elements as Arguments
#include<stdio.h>
void prime(int);
main()
{
	int a[100],n;
	printf("enter n value:");
	scanf("%d",&n);	
	for(int i=0;i<n;i++)
	{
		printf("enter integer:");
		scanf("%d",&a[i]);
		prime(a[i]);
	}
}
void prime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i == 0)
			count++;
	}
	if(count == 2)
		printf("Prime\n");
	else
		printf("Not a prime\n");
}

