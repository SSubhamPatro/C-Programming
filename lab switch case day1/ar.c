#include<stdio.h>
int main()
{
    int num1,num2;
    char ch;
    printf("Enter the num1 value:");
    scanf("%d",&num1);
    printf("Enter the num2 value:");
    scanf("%d",&num2);
     printf("Enter the ch value:");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
        printf("Addition is: %d",num1+num2);
        break;
        
        case '-':
        printf(" Subtraction is: %d",num1-num2);
        break;
        
         case '*':
        printf("Multiplication is: %d",num1*num2);
        break;

        case '/':
        printf(" Division is %d",num1/num2);
        break;

        case '%':
        printf("Mod is:%d",num1%num2);
        break;
    
    }
}
