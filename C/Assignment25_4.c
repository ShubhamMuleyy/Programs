#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char *ch)
{
	bool bFlag = false;

	if(*ch== 'a' || *ch == 'e' || *ch == 'i' ||*ch == 'o' || *ch == 'u' || *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
	{
		bFlag = true;
	}
	else
	{
		bFlag = false;
	}

	if(bFlag == true)
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
	char arr[20];
	bool bRet = false;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);

	bRet = ChkVowel(arr);

	if(bRet == true)
	{
		printf("It is a vowel");
	}
	else
	{
		printf("It is not a vowel");
	}

	return 0;
}