#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
	bool bFlag = false;		

	if(ch >= 'a' && ch <='z' || ch >= 'A' && ch <='Z')
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
	char cValue = '\0';
	bool bRet = false;

	printf("Enter the charcter\n");
	scanf("%c",&cValue);

	bRet = ChkAlpha(cValue);

	if(bRet == true)
	{
		printf("It is character");
	}
	else
	{
		printf("It is not character");
	}

	return 0;
}