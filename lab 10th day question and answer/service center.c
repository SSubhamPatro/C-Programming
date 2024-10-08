#include<stdio.h>
int main()
{
    int wheeler=0,age=0,tiers=0,p=0,bill=0,number=0;
    char name[10];
    char vehiclename[10];

    printf("------------SERVICE CENTER----------");
    printf("------------WELCOME-----------------");
    printf("\n Please enter your wheeler type");
    scanf("%d",&wheeler);
    if(wheeler==2||wheeler==3||wheeler==4)
    {
       printf("Enter the vehicle age:");
       scanf("%d",&age);
       
       if(age>8)
       {
        printf("1)Enter 1 for tyre problem \n 2)Enter 2 for fuel problem \n 3)Enter 3 for engine issue \n 4)Enter 4 for general services");
        scanf("%d",&p);
        
        if(p==1)
		{
        	printf("how many tyers:");
        	scanf("%d",&tiers);
        	bill=tiers*400;
		}
		else if(p==2)
		{
			bill = 1500;
		}
		else if(p==3)
		{
			bill=2000;
		}
		else if(p==4)
		{
			bill=1000;
		}
		else
		{
			printf("please choose correct option");
			return 0;
		}
	}
		else
		{
			printf("we will do service after a while");
			return 0;
		}
	}
		
	else
    {
        printf("this service center is not acceptingother than 2 wheeler, 3 wheeler and 4 wheeler");
    }


printf("Enter your name");
scanf("%s",name);
printf("\nEnter mobile number:");
scanf("%d",&number);
printf("\nEnter Vehicle name");
scanf("%s",vehiclename);

printf("********your bill********");
printf("%s",name);
printf("%s",vehiclename);
printf("%d",number);
printf("%d",bill);
printf("Thank You visit again");
}

