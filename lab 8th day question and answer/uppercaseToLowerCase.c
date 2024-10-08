#include<stdio.h>
int main()
{
    char ch;
    printf("enter the ch :");
    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z')
    {
       printf("output %c",ch+32);
    }
    else
    {
        printf("output %c",ch-32);
    }

}
