//write a 'c' program to find previous multiple of 10 of given two-digit number only.
//sample input a=26
//output 20
#include<stdio.h>
int main()
{
	int a=10,b,c;
	printf("Enter the value of b:");
	scanf("%d",&b);
	c=a*(b/10);
	printf("Previous multiple of 10 of given two-digit number only: %d",c);
	return 0;
}

