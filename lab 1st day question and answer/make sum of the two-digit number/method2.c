#include<stdio.h>
main()
{
	int a,sumOfDigits;
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	sumOfDigits=sumOfDigits+a%10;
	sumOfDigits=sumOfDigits+a/10;
	printf("make sum of the two-digit number: %d",sumOfDigits);
	return 0;
}
