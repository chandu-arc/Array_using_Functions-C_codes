// Swapping of two numbers without third variable using functions

#include<stdio.h>
void swap(int,int);
main()
{
	int a,b;
	printf("Enter a, b values:");
	scanf("%d %d",&a,&b);
	
	swap(a,b);
}
void swap(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a= %d\tb= %d",a,b);
}
