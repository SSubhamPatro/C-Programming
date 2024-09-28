//Write a 'c' program to make the sum of two-digit number without using '+' operator.
#include<stdio.h>
main()
{
	int a,b,sum;
	printf("Enter the value of a:\n ");
	scanf("%d",&a);
	printf("Enter the value of b:\n ");
	scanf("%d",&b);
	sum=a-(-b);
	printf("Sum of two-digit number without using '+'op: %d\n",sum);
	return 0;
}

