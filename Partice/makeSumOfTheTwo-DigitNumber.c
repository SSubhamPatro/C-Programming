//Write a 'c' program to make sum of the two-digit number.

#include<stdio.h>
int main()
{
	int a,lastno,firstno,sum;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	lastno=a%10;
	firstno=a/10;
	sum=lastno+firstno;
	printf("Sum of the two-digit number: %d",sum);
}
