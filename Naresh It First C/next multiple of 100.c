#include<stdio.h>
int main()
{
	int a=100,b,c=100,result;
	printf("Enter the value of b:");
	scanf("%d",&b);
	result=a*(b/100)+100;
	printf("Next multiple of 100: %d",result);
}
