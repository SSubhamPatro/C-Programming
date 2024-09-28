//Write a 'c' program to make the sum of two-digit number without using '+' operator.

#include<stdio.h>
main()
{
	int a=5;
	int b=6;
	int sum =0;
	sum = a-(-b);
	printf("Sum is without using '+'op: %d",sum);
	return 0;
}
