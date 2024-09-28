#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the vlaue of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	printf("a+=b=%d\n",a+=b);
	printf("a-=b=%d\n",a-=b);
	printf("a/=b=%d\n",a/=b);
	printf("a*=b=%d\n",a*=b);
	printf("a%=b=%d",a%=b);
}
