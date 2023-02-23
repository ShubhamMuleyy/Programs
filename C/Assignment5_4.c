#include<stdio.h>


int Summation(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	for(iCnt = iNo;iCnt > 0;iCnt--)
	{
		if(iNo % iCnt != 0)
		{
			iSum = iSum + iCnt;
		}
		
	}
	return iSum;
}


int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the value\n");
	scanf("%d",&iValue);

	iRet = Summation(iValue);
	printf("Summation is %d:",iRet);

	return 0;
}