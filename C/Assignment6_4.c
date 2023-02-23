#include<stdio.h>


int Multiply(int iNo1,int iNo2,int iNo3)
{
	int iSum = 1;

	if(iNo1 == 0)
	{
		iNo1 = 1;
	}
	else if(iNo2 == 0)
	{
		iNo2 = 1;
	}
	else if(iNo3 == 0)
	{
		iNo3 = 1;
	}

	iSum = iSum * iNo1 * iNo2 * iNo3;

	return iSum;
	

	
}


int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iValue3 = 0;

	int iRet = 0;

	printf("Enter the value\n");
	scanf("%d",&iValue1);

	printf("Enter the value\n");
	scanf("%d",&iValue2);

	printf("Enter the value\n");
	scanf("%d",&iValue3);

	iRet = Multiply(iValue1,iValue2,iValue3);
	printf("Multiplication is %d:",iRet);

	return 0;
}