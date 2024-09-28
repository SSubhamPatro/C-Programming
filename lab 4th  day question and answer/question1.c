#include<stdio.h>
main()
{
	int b;
	printf("Enter a positive integer: ");
	scanf("%d",&b);
	b=b*(b+1)/2;
	printf("The sum of natural numbers from 1 to 10 :%d",b);
}
