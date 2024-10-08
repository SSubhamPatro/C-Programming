//what is output of following code? 
#include<stdio.h> 
int main() 
{ 
float a=12; 
int b=10; 
if(a%b==2) 
printf("Wellcome To "); 
else 
printf("U Can Go"); 
printf("Test"); 
return 0; 
}

//output:Compile-Time -Error
// because of % operator
//in if/else you can't use % operator	
