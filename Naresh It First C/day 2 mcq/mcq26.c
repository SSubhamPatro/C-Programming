//what is output of following code? 
//[User Input is : 10 20 ] 
#include<stdio.h> 
int main() 
{ 
int a; 
int b; 
if(scanf("%d%d",&a,&b)==2) 
{ 
printf("%d ",a); 
} 
else 
{ 
printf("%d ",b); 
} 
return 0; 
}
// output: 10	
