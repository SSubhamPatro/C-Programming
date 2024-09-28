//Write a 'c' program to make the sum of two-digit number without using '+' operator.
#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	sum=a- -b;
	printf("Without using the '+' operator: %d",sum);
	return 0;
}
