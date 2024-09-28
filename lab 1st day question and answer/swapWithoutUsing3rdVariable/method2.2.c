#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the a value:\n");
	scanf("%d",&a);
	printf("Enter the b value:\n");
	scanf("%d",&b);
	printf("Before swapping the value of a=%d and b=%d \n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swapping the value of a=%d and b=%d",a,b);
	
}
