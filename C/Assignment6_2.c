#include<stdio.h>
#include<stdbool.h>


bool ChkGreater(int iNo)
{
	bool bFlag = false;

	if(iNo > 100)
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
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	bRet = ChkGreater(iValue);

	if(bRet == true)
	{
		printf("%d is greater than 100 ",iValue);
	}
	else
	{
		printf("%d is smaller than 100 ",iValue);
	}
	

	return 0;
}