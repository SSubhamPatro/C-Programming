#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	switch(n%2)
	{
		case 0:puts("Even"); break;
		default:puts("Odd");
	}
}

