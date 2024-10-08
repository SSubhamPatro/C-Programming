//what is output of following code? 
#include<stdio.h> 
int main() 
{ 
int a=99; 
int b=100; 
if(!(++a|b)) 
{ 
printf("Inside if block "); 
} 
if(a++==--b)
 { 
 printf("2nd if block "); 
 } 
 else if(a==b) 
 printf("1st else block"); 
 else printf("2nd else block"); 
 return 0; 
 }
 
// output: 2nd else block	
