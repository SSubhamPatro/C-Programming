#include<stdio.h>
int main()
{
    int month;
    printf("enter the month:");
    scanf("%d",&month);
    switch(month)
    {
        case 1:case 3:	case 5: case 7:	case 8:	case 10:case 12:puts("30 days");break;
		case 4:case 6:case 9:case 11:puts("31 days");break;
		case 2:puts("28 or 29 days (depending on leap year)"); break;
		default: puts("invalid month number");
        
    }
    
}
