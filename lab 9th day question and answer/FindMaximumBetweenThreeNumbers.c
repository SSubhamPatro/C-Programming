#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a =\n");
    scanf("%d",&a);
    printf("b =\n");
    scanf("%d",&b);
    printf("c =\n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}
