#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
	bool bFlag = false;		

	if( ch >= 'a' && ch <='z' || ch >= 'A' && ch <='Z')
	{
		bFlag = false;
	}
	else
	{
		bFlag = true;
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
	char cValue = '\0';
	bool bRet = false;

	printf("Enter the charcter\n");
	scanf("%c",&cValue);

	bRet = ChkAlpha(cValue);

	if(bRet == true)
	{
		printf("It is a digit");
	}
	else
	{
		printf("It is not a digit");
	}

	return 0;
}