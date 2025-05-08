// Print Using Functions Ascending of an Array
// Passing whole array elements as Arguments
#include<stdio.h>
void ascending(int a[],int size);
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
	ascending(a,n);
}
void ascending(int a[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int i=0;i<size;i++)
		printf("%d\t",a[i]);
}
