#include<stdio.h>
#include<stdbool.h>


bool ChkEqual(int iNo1 ,int iNo2)
{
	bool bFlag = false;

	if(iNo1 == iNo2)
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
	int iValue1 = 0;
	int iValue2 = 0;
	bool bRet = false;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);

	printf("Enter first number\n");
	scanf("%d",&iValue2);

	bRet = ChkEqual(iValue1,iValue2);

	if(bRet == true)
	{
		printf("It is equal ");
	}
	else
	{
		printf("It is not equal ");
	}
	

	return 0;
}