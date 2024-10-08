//what is output of following code? 
#include<stdio.h> 
int main() 
{ 
int a=99; 
int b=a++ + ++a + a--;
if(a==101) 
 { 
if(b==301) 
 { 
 printf("Nested if Block"); 
 }
else 
  {
printf("Nested else Block"); 
   } 
   } 
else 
   { 
   printf("Outer else Block"); 
   }
return 0; 
	}
//output: Outer else Block	
