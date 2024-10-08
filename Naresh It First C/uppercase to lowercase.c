//Write a program to convert from uppercase Character to LowerCase Character

#include<stdio.h>
int main()
{
	char uppercase;
	printf("Enter a Uppercase Character:");
	scanf(" %c",&uppercase);
	printf("Lowercase Character is: %c",uppercase+32);
}
