//Logical Operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("\n a&&b=%d\n a||b=%d\n !a=%d\n !b=%d",a&&b,a||b,!a,!b);
    return 0;
}
