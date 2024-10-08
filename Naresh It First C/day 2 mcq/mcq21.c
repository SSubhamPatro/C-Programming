//what is output of following code? 
#include<stdio.h> 
int main()
{ 
int a=99; 
int b=100; 
if(a<=b) 
{ 
if(b >= ++a) 
{ 
printf("Nested if Block"); 
} 
else 
{ 
printf("Nested else Block"); 
} 
} 
printf("OutSide Block"); 
return 0; 
}
//output: Nested if Block OutSide Block	
