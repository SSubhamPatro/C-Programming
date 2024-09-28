//write a 'c' program to find maximum number among two numbers without using ternary operator and control statement.

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	a>b&&printf("a is big")||printf("b is big");
	return 0;
}
