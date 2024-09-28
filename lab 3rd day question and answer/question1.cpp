#include<stdio.h>
main()
{
	int a,lastNo,firstNo,sum;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	lastNo=a%10;
	firstNo=a/100;
	sum=lastNo+firstNo;
	printf("add the 1st digit and last digit : %d",sum);
}

