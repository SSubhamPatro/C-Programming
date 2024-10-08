#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	age>18 && printf("You are  eligible for voting") || printf("You are not eligible for voting ");
}
