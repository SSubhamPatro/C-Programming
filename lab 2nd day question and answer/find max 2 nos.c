#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a,b values: ");
	scanf("%d %d",&a,&b);
	a>b && printf("a is big") || printf("b is big");
}
