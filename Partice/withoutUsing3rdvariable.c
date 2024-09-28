#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a and b:");
	scanf("%d %d",&a,&b);
	printf("before swapping the value of a=%d and b=%d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swapping the value of a=%d and b=%d",a,b);
	return 0;
}
