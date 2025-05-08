// Print Using Functions Greatest of N elements in an Array
// Passing whole array elements as Arguments

#include<stdio.h>
void greatest(int a[],int size);
main()
{
	int a[100],n;
	printf("enter n value:");
	scanf("%d",&n);	
	for(int i=0;i<n;i++)
	{
		printf("enter integer:");
		scanf("%d",&a[i]);
	}	
	greatest(a,n);
}
void greatest(int a[],int size)
{
	int greatest = a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i] > greatest)
			greatest = a[i];
	}
	printf("%d\n",greatest);
}
