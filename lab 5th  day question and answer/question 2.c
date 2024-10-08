#include<stdio.h>
int main()
{
	int a,b;
	//int c,d;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	a%2==0&&printf("%d is even number\n",a)||printf("%d is odd number\n",a);
	b%2==0&&printf("%d is even number\n",b)||printf(" %d is odd number",b);
	
	return 0;
	
}
