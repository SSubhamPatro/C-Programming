#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 4 digit number :");
	scanf("%d",&n);
	printf(" resverse is %d",n%10);
	n=n/10;
	printf("%d",n%10);
	n=n/10;
	printf("%d",n%10);
	printf("%d",n/10);
}
