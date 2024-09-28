#include<stdio.h>
main()
{
	float bill;
	int pepole,a;
	printf("total bill: ");
	scanf("%f",&bill);
	printf("number of people: ");
	scanf("%d",&pepole);
	a=bill/pepole;
	printf("amount each person needs to pay: %d",a);
}
