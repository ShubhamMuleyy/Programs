// Program to divide two number

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
	int iAns = 0;

	if(iNo2 == 0)
	{
		return -1;
	}
	
		iAns = iNo1/iNo2;

	return iAns;
}

int main()
{
	int iValue = 15,iValue1 = 5;
	int iRet = 0;

	iRet = Divide(iValue,iValue1);
	
	printf("Division is %d",iRet);

	return 0;

}