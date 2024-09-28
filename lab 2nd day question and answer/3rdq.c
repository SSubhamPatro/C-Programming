#include<stdio.h>
main()
{
	int a ,b;
	printf("enter the value :");
	scanf("%d",&a);
	b = ((a%10/5)+a/10)*10;
	printf("last digit of the given number is greater than or equal to 5 : %d",b);

}
