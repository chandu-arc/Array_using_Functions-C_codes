// Print Using functions Given Array Element is Palindrome or not
//passing Individual arrays elements as Arguments
#include<stdio.h>
void palindrome(int);
main()
{
	int a[100],n;
	printf("enter n value:");
	scanf("%d",&n);re	for(int i=0;i<n;i++)
	{
		printf("enter integer:");
		scanf("%d",&a[i]);
		palindrome(a[i]);
	}
}
void palindrome(int n)
{
	int sum=0,temp=n;
	while(n!=0)		//while(n>0)
	{
		int rem = n%10;
		sum = sum*10 + rem;
		n = n/10;
	}
	if(sum == temp)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
}

