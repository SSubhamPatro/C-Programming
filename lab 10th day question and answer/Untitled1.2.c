#include<stdio.h>
int main()
{
	int age;
	float height,amount,pay_extra,final_price;
	char VIPpass[10];
	
	printf("Enter the age");
	scanf("%d",&age);
	printf("Enter the height");
	scanf("%f",&height);
	
	if(age<3)
	{
		amount=0;
	}
	else if(age>4 && age<12)
	{
		amount=20;
	}
	else if(age>13 && age<64)
	{
		amount=100;
	}
	else if(age>=65)
	{
		amount=50;
	}
	
	if(height>180)
	{
		pay_extra=50;
	}
	 else if(height>=120 && height<180)
	{
		amount=amount;
	}
	 else if(height<120)
	{
		amount=amount*0.50;
	}
	final_price=amount+pay_extra;
	printf("Customer have VIP PASS Or Not");
	scanf(" %c",&VIPpass);
	
	if(VIPpass=='Y'||'y')
	{
		final_price=amount-(amount*0.10);
	}
	else if(VIPpass=='N'||'n')
	{
		printf("No VIP Discount");
	}
	
	printf("Customer Details ");
	printf("The customer's age : %d \n",age);
	printf("The customer's height : %.2f \n",height);
	printf("The customer's VIP PASS Status= %c\n",VIPpass);
	
	printf("\nprice Breakdown:\n");
	printf("Ticket Price:%.2f\n",amount);
	printf("Additional Charges: %.2f",pay_extra);
	printf("Final Ticket price: %.2f",final_price);
	
}

