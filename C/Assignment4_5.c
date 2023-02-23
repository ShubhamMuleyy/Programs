#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	int iSum = 0;

	for(iCnt = 1;iCnt < iNo;iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSum1 = iSum1 + iCnt;		
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}

		iSum = iSum1 - iSum2;
	}

	return iSum;
}


int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = Summation(iValue);

	printf("%d\n",iRet);

	return 0;
}