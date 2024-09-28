//Write a C program to convert temperature from Fahrenheit to Celsius.

#include<stdio.h>
main()
{
	float C,F;
	printf("Enter the value of f: ");
	scanf("%f",&F);
	C=(F - 32) * (5.0 / 9.0);
	printf("%.2f Fahrenheit to Celsius: %.2f",F,C);
}

