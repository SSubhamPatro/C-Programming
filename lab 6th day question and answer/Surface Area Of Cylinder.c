#include<stdio.h>
int main()
{
	const float pi=3.14;
	int radius,height;
	float a;
	printf("Enter the radius of cylinder: ");
	scanf("%d",&radius);
	printf("Enter the height of the cylinde: ");
	scanf("%d",&height);
	a=2*3.14*radius*radius+2*3.14*radius*height;
	printf("surface Area:%.2f",a);
	return 0;
}
