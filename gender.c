#include<stdio.h>
int main()
{
	int age;
	char gender[30];
	printf("enter the age");
	scanf("%d",&age);
	printf("enter the gender");
	scanf("%s",&gender);
	if(age>=21 &&gender=='m')
	{
	printf("you are eligible for marriage",gender);
    }
    else if(age>=18 && gender=='f')
    {
    printf("You are not eligible for marriage",gender);
	}
	  	
	}
	
