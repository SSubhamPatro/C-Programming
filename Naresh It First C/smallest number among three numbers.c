#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the  Number:");
	scanf("%d %d %d",&a,&b,&c);
	d=(a*(a<b && a<c))+(b*(b<a && b<c))+(c*(c<a && c<b));
	
	printf("smallest number among three numbers %d: ",d);
}
