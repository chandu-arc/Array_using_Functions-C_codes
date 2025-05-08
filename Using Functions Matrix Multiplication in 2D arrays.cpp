// Using Functions Matrix Multiplication in 2D arrays

#include<stdio.h>

void mult(int a[50][50], int b[50][50], int r1,int c1, int r2, int c2);

main()
{
	int a[50][50], b[50][50],r1,r2,c1,c2;
 
	printf("enter row matrix r1 and column matrix c1: "); 
	scanf("%d %d",&r1,&c1);
	printf("enter matrix1:\n");
	for(int i=0; i<r1; i++)
		for(int j=0; j<c1; j++)
			scanf("%d", &a[i][j]);
  
 	printf("enter row matrix r2 and column matrix c2: ");
 	scanf("%d %d",&r2,&c2);
 	printf("enter matrix2:\n");
 	for(int i=0; i<r2; i++)
  		for(int j=0; j<c2; j++)
  			scanf("%d", &b[i][j]);
  	
  	mult(a,b,r1,c1,r2,c2);
}
void mult(int a[][50], int b[][50],int r1,int c1, int r2, int c2) 
{
	if(c1==r2)
	{
		printf("Matrix multiplication is:\n");
		int x[50][50];
		for(int i=0; i<r1; i++)
	  	{
	   		for(int j=0; j<c2; j++)
	   		{
	   			x[i][j]=0;
	    		for(int k=0; k<c1; k++)
	    		{
	     			x[i][j] +=a[i][k]*b[k][j];
	    		}
	    		printf("%d\t", x[i][j]);
	    	}
	    	printf("\n");
	  	}
	}
	else
	  	printf("Matrix Multiplication is not possible.");
}
