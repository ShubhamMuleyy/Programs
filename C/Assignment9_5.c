#include<stdio.h>


int FactorialDiff(int iNo)
{
	int iCnt = 0,iSum1 =1,iSum2 =1,iSum = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			iSum1 = iSum1 * iCnt;
		}
	}

	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if(iCnt % 2 != 0)
		{
			iSum2 = iSum2 * iCnt;
		}
	}
	return (iSum = iSum1 - iSum2);
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter value\n");
	scanf("%d",&iValue);

	iRet = FactorialDiff(iValue);
	printf("FactorialDiff is %d",iRet);

	return 0;
}

//Time complexity - O(N)