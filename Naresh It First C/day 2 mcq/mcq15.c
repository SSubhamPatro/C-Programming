//what is output of following code? 
#include<stdio.h> 
int main() 
{ 
int a=10; 
int b=20;
if(printf("%d",a))
printf(" %d",a+b); 
else 
printf(" %d",a-b); 
return 0; 
}

//output: 10 30	
