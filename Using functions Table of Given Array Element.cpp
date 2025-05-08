// Print Using functions Table of Given Array Element 
//passing Individual arrays elements as Arguments

#include<stdio.h>
void table(int);
main()
{
	int a[100],n;
	printf("enter n value:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter integer:");
		scanf("%d",&a[i]);
		table(a[i]);
	}
}
void table(int n)
{
	for(int i=1;i<=10;i++)
		printf("%d * %d = %d\n",n,i,n*i);	
}

