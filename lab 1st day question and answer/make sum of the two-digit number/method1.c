//Write a 'c' program to make sum of the two-digit number.
//sample  input = 34
//        output = 7

#include<stdio.h>
main()
{
	int a=34;
	int sumOfDigits=0;
	sumOfDigits=sumOfDigits+a%10;
	sumOfDigits=sumOfDigits+a/10;
	printf("sum of two-digits: %d",sumOfDigits);
	return 0;
	
}

