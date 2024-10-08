#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    switch(a>=b)
    {
        case 1:printf("%d is maximum",a);break;
        default:printf("%d is maximum",b);
    }
}
