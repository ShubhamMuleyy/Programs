#include<stdio.h>


int EVenFactorial(int iNo)
{
	int iCnt = 0,iSum =1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			iSum = iSum * iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter value\n");
	scanf("%d",&iValue);

	iRet = EVenFactorial(iValue);
	printf("Even Fcatorial is %d",iRet);

	return 0;
}

//Time complexity - O(N)