#include<stdio.h>
int main()
{
    int choice;
    options:
    printf("\n-----------------\n");
    printf("Select the Menu");
    printf("1.TURN ON THE LIGHT\n");
    printf("2.TURN OFF THE LIGHT\n");
    printf("3.TURN ON THE AC\n");
    printf("4.TURN OFF THE AC\n");

    printf("ENTER YOUR CHOICE");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:puts("\n Light is now ON.");break;
        case 2:puts("\n Light is now OFF.");break;
        case 3:puts("\n AC is now ON.");break;
        case 4:puts("\n AC is now OFF.");break;
        default:puts("invalid input");goto options;



    }
}
