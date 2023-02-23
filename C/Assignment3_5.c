#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char Vowel(char cValue)
{
	if(cValue == 'a' ||cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u' )
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	char ch = '\0';
	char cRet = '\0';

	printf("Enter the charcater\n");
	scanf("%ch",&ch);

	cRet = Vowel(ch);

	if(cRet == true)
	{
		printf("It is a vowel");

	}
	else
	{
		printf("It is not vowel");
	}

	return 0;
}
