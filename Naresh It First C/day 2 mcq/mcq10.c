//what is output of following code?
#include<stdio.h> 
int main() 
{ 
int a=32; 
int b=32; 
if(a==b); 
{ 
a++; 
printf("Both are Equal a=%d b=%d",a,b); 
} 
else 
{ 
printf("Both are not Equal a=%d b=%d",a,b); 
} 
return 0; 
}

//output:Compile-Time -Error
