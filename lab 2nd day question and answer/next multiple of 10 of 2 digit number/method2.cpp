#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	b=(((a/10)*10)+10);
	printf("next multiple of 10 of two-digit number: %d",b);
	return 0;
}
