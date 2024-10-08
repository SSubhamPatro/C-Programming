//what is output of following code? 
#include<stdio.h> 
int main() 
{ 
int a = 0;
if((a++) || a) 
printf("Hello"); 
else 
printf("Hi");
return 0; 
}
// output: Hello
