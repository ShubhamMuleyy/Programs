#include<stdio.h>
#include<stdbool.h>


bool ChkSpecial(char ch)
{
	bool bFlag = false;

	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
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

	printf("Enter the charcater");
	scanf("%c",&cValue);

	bRet = ChkSpecial(cValue);

	if(bRet == true)
	{
		printf("It is special character");
	}
	else
	{
		printf("It is not special character");
	}

	return 0;
}