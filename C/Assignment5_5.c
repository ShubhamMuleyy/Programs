#include<stdio.h>


int SummationD(int iNo)
{
	int iCnt = 0;
	int iSum1 = 0;
	int iSum2 = 0;

	for(iCnt = 1;iNo > iCnt ;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum1 = iSum1 + iCnt;
			printf("F : %d\n",iSum1);
		}
		else
		{
			iSum2 = iSum2 + iCnt;
			printf("NF :%d\n",iSum2);
		}
		
	}
	return (iSum1 - iSum2);
}


int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the value\n");
	scanf("%d",&iValue);

	iRet = SummationD(iValue);
	printf("Summation is %d:",iRet);

	return 0;
}