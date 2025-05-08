// Print Using Functions Greatest & Smallest of N elements in an Array
// Passing whole array elements as Arguments
#include<stdio.h>
void GS(int a[],int size);
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
	GS(a,n);
}
void GS(int a[],int size)
{
	int greatest = a[0],smallest=a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i] > greatest)
			greatest = a[i];
		else if(a[i] < smallest)
			smallest = a[i];
	}
	printf("%d\n",greatest);
	printf("%d\n",smallest);
}
