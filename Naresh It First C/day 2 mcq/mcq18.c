//what is output of following code? 
#include<stdio.h> 
int main() 
{ 
int a=12; 
int b=10; 
if(a) 
printf("Java"); 
printf(" & "); 
if(b) 
printf(".Net"); 
else if(a!=b) 
printf(" Python"); 
return 0; 
}
// output: Java & .Net	
