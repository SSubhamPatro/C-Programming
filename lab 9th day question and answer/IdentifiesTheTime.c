#include<stdio.h>
int main()
{
    int hour;
    printf("Enter the hour(24-hour format): ");
    scanf("%d",&hour);
    if(hour>=0 && hour<=5)
    {
        printf(" Mid Night");
    }
    else if(hour>5 && hour<=12)
    {
        printf("Morning");
    }
    else if(hour>12 && hour<=15)
    {
        printf("Afternoon");

    }
    else if(hour>15 && hour<=19)
    {
        printf("Evening");

    }
    else if(hour>19 && hour<=24)
    {
        printf("Night");
    }
    else
    {
        puts("Invalid number");

    }

}
