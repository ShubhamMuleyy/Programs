#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
	bool bFlag = false;
	while(*str != '\0')
	{
		if(*str == ch)
		{
			bFlag = true;
		}
		else
		{
			bFlag = false;
		}
		str++;
	}
	return bFlag;
}

	if(bFlag == true)
	{
		return true;
	}
	else
	{
		return false;
	}


int main()
{
	char Arr[20];
	char cValue = '\0';
	bool bRet = false;

	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the character\n");
	scanf(" %c",&cValue);

	bRet = ChkChar(Arr,cValue);

	if(bRet == true)
	{
		printf("The character is present");
	}
	else
	{
		printf("Character is not present");
	}

	return 0;


}