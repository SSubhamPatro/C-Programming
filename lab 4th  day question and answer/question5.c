/*Area of Different Shape
Description:
Write a C program that takes 2 number as input and store that number in a variable, First input for radius 
of a Circle and 2nd input for side of a Square.*/

#include<stdio.h>
main()
{
	const float pi =3.14;
	float r,radius,s,square;;
	//int s,square;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	printf("Enter side of square: ");
	scanf("%f",&s);
	radius=pi*r*r;
	printf("Area of Circle is : %.2f\n",radius);
	square=s*s;
	//printf("Area of Circle is : %.2f\n",radius);
	printf("Area of square is : %.0f",square);
}
