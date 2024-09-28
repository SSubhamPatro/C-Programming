#include<stdio.h>
main()
{
	int a,year,month,week,days;
	printf("the value of a is :");
	scanf("%d",&a);
	year=a/365;
	days=a%365;
	month=days/30;
	days=days%30;
	week=days/7;
	days=days%7;
	printf("%d year,%d week,%d month,%d days",year,week,month,days);
}
