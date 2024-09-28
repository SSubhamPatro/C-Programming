//V=4/3*3.14*r3
//volume of sphere
#include<stdio.h>
int main()
{
	const float pi=3.14;
	float r,v;//r-radius //v-volume
	printf("enter the radius of sphere: ");
	scanf("%f",&r);
	v=1.33333333*pi*r*r*r;//answer is 4/3=1.3333333
	printf("Volume of the sphere is: %.2f",v);
	return 0;
}
