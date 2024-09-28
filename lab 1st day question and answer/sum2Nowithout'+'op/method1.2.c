//Write a 'c' program to make the sum of two-digit number without using '+' operator.

#include<stdio.h>
main()
{
	int a,b,sum;
	printf("Enter the first value a and b:");
	scanf("%d %d",&a,&b);
	sum=a-(-b);
	printf("Two digit number without using '+' operator: %d",sum);
}
