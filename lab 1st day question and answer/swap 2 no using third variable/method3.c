#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	//printf("Enter the value of b\n ");
	scanf("%d %d",&a,&b);
	//printf("Enter the value of b\n ");
	//scanf("%d",&b);
	printf("before swapping a is =%d and b is = %d\n",a,b);
	c=a;
	a=b;
	b=c;
    printf("after swapping a is =%d and b is = %d",a,b);
    getch();
}
