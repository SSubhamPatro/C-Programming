#include<stdio.h>
int main()
{
	int age;
	char name[30];
	printf("Enter the name:");
	scanf(" %s",&name);
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("hi %s you are eligible for vote : ",name);
		return 0;
		
	}
	else
	{
		printf("Sorry %s you are not eligible for vote: ",name);
		//return 0;
		
	}
}
