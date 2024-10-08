#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value of ch:");
	scanf(" %c",&ch);
	if(ch>='A' && ch<='Z')ch+=32;
	if(ch>='a' && ch<='z')
	{
		switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			case 1:puts("Vowel"); break;
			default :puts("consonant");
		}
		
	}
	

else if(ch>='0' && ch<='9') puts("it's a Digit");
else puts("It's a special character");
}
