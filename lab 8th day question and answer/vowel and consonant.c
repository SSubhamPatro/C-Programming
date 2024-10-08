#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet: ");
    scanf(" %c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
    printf("vowel");
	  if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )) 
    printf("Consonant");
	 return 0;
    }
