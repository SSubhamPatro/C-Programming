#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a and b values: ");
	scanf("%d %d",&a,&b);
	printf("Before swapping the value a=%d and b=%d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swapping the value a=%d and b=%d",a,b);
}
