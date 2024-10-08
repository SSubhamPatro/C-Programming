#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter the side1:\n");
    scanf("%d",&side1);
    printf("enter the side2:\n");
    scanf("%d",&side2);
    printf("enter the side3:\n");
    scanf("%d",&side3);
    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1)
   {
    printf("The triangle is valid");
   }  
   else
   {
    puts("the triangle is not valid");
   }
}
