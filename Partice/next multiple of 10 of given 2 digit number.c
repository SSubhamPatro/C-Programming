//write a 'c' program to find next multiple of 10 of given 2 digit number only.
//sample input a=34
//output 40
#include<stdio.h>
int main()
{
	int a=10,b,c=10,formula;
	printf("Enter the value of b: ");
	scanf("%d",&b);
	formula=((a*(b/10))+a);
	printf("Next multiple of 10 of given two-digit number: %d",formula);
	return 0;
}
