// Print Using Functions Smallest of N elements in an Array
// Passing whole array elements as Arguments

#include<stdio.h>
void smallest(int a[],int size);
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
	smallest(a,n);
}
void smallest(int a[],int size)
{
	int smallest = a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i] < smallest)
			smallest = a[i];
	}
	printf("%d\n",smallest);
}
