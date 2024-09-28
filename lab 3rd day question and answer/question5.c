#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a * (a > b && a > c)) + (b * (b > a && b > c)) + (c * (c > a && c > b));
//	sum=a>b;
//	d=sum>c;
	//c>a;
	//e=d>c;
	printf("the biggest number among three numbers is:%d",d);
}
