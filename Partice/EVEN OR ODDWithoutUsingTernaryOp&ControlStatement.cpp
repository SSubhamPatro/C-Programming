//Write a 'c' program to check and print that the given number is Even or Odd without using ternary operator and control statement.


#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	a%2==0&&printf("Even")||printf("Odd");
	return 0;
}
