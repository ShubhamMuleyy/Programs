#include<stdio.h>


int OddFactorial(int iNo)
{
	int iCnt = 0,iSum =1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if(iCnt % 2 != 0)
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

	iRet = OddFactorial(iValue);
	printf("Odd Fcatorial is %d",iRet);

	return 0;
}

//Time complexity - O(N)