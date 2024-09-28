#include<stdio.h>
main()
{
	int a,lastNo,firstNo,sum;
	printf("Enter the values of a: ");
	scanf("%d",&a);
	lastNo=a%10;
	firstNo=a/10;
	sum=lastNo+firstNo;
	printf("make sum of the two-digit number: %d",sum);
	return 0;
	
}
