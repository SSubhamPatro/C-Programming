#include<stdio.h>
int main()
{
    char ch;
    printf("enter the ch :");
    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z')
    {
       printf(" %c",ch+32);
       return 0;
    }
    if(ch>='a' && ch<='z')
    {
        printf(" %c",ch-32);
    }

}
