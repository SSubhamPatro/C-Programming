#include<stdio.h>
int main()
{
    int num1,num2;
    char operator;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Eneter opertaor:\n");
    scanf(" %c",&operator);
    operator=='+' && printf("Addition=%d",(num1+num2));
    operator=='-' && printf("Subtraction=%d",(num1-num2));
    operator=='*' && printf("Multiplication=%d",(num1*num2));
    operator=='/' && printf("Divison=%d",(num1/num2));


}
