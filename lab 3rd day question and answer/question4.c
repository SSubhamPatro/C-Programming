#include<stdio.h>
main()
{
	char character;
	printf("Enter a lowercase character: ");
	scanf("%c",&character);
	printf("Uppercase equivalent:%c",character - 32);
}
//character+32 = uppercase to lowercase
//character-32 = lowercase to uppercase


