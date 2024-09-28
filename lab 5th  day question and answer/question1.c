3.Program:
Split the Bill
Description:
Write a program that takes the total bill amount and the number of people from the user. Calculate and print the amount each person needs to pay, assuming an equal split of the bill.
Constraints:
SampleInput:
Input :

-------

total bill( in float) ->1200.00

number of people(in int)-> 5



ANSWER 

#include<stdio.h>
main()
{
	float bill;
	int pepole,a;
	printf("total bill: ");
	scanf("%f",&bill);
	printf("number of people: ");
	scanf("%d",&pepole);
	a=bill/pepole;
	printf("amount each person needs to pay: %d",a);
}


2)Program:
Find Even or Odd
Description:
Write a C program to find the given number is even or odd. Take the input from the console by using scanf().
Constraints:
SampleInput:
Enter a number : 12

Enter a number : 13

ANSWER
#include<stdio.h>
int main()
{
	int a,b;
	int c,d;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	a%2==0&&printf("%d is even number\n",a)||printf("%d is odd number\n",a);
	b%2==0&&printf("%d is even number\n",b)||printf(" %d is odd number",b);
	
	return 0;
	
}


Program:1
Calculate simple interest
Description:
Create a program that takes the principal amount, interest rate, and time in years from the user and calculates the simple interest. Print the result with appropriate messages.
Constraints:
SampleInput:
principal amount: 4000



interest rate (in percentage): 5



time in years: 3

ANSWER

#include<stdio.h>
main()
{
	int p,r,t;
	float si;
	printf("principal amount :");
	scanf("%d",&p);
	printf("interest rate (in percentage): ");
	scanf("%d",&r);
	printf("time in years:");
	scanf("%d",&t);
	si=p*r*t/100;
	printf("Simple Interest is:%.2f",si);
}




