#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a\n ");
	scanf("%d",&a);
	printf("Enter the value of b\n ");
	scanf("%d",&b);
	printf("before swapping a is =%d and b is = %d\n",a,b);
	c=a;
	a=b;
	b=c;
    printf("after swapping a is =%d and b is = %d",a,b);
    getch();
    getch();
}
