#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet: ");
    scanf(" %c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("Uppercase",ch-32);
        return 0;
    }
    if(ch>='a'&& ch<='z')
    {
        printf("LowerCase",ch+32);
    }
}