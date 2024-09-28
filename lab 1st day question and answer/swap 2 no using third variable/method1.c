#include<stdio.h>
 main()
{

	int a=10,b=20,c;
	printf("The value of a=%d and b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("The value of a=%d and b=%d",a,b);
    getch();
}
 
