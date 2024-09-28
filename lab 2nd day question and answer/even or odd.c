#include<stdio.h>
main()
{
	int a;
	printf("Enter a no : ");
	scanf("%d",&a);
	a%2==0 && printf("even") || printf("odd");
}
