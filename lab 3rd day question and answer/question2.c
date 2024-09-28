//Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second format.
#include<stdio.h>
main()
{
	int totalseconds,hour,minute,second;
	printf("Enter the number of seconds:" );
	scanf("%d",&totalseconds);
	hour = totalseconds/3600;
	minute=(totalseconds%3600)/60;
	second=totalseconds%60;
	printf("The %d seconds is equivalent to\n hour= %d\n minute=%d\n second=%d\n",totalseconds,hour,minute,second);
}
