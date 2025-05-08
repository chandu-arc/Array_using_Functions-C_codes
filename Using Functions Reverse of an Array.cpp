// Print Using Functions Reverse of an Array
// Passing whole array elements as Arguments
#include<stdio.h>
void reverse(int a[],int size);
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
	reverse(a,n);
}
void reverse(int a[],int size)
{
	int temp;
	for(int i=0;i<size/2;i++)
	{
		temp = a[i];
		a[i] = a[size-i-1];
		a[size-i-1] = temp;	
	}
	for(int i=0;i<size;i++)
		printf("%d\t",a[i]);
}
