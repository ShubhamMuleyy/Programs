#include<stdio.h>


int DollarToINR(int iNo)
{
	int iSum = 0;

	iSum = iNo * 80;

	return iSum;
	

}


int main()
{
	int iValue = 0,iRet = 0;

	printf("Enter number of USD\n");
	scanf("%d\n",&iValue);
	
	iRet = DollarToINR(iValue);
	printf("Value is INR is %d",iRet);

	return 0;

}