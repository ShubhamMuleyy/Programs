#include<stdio.h>


int Fact(int iNo)
{
	static int iCnt = 1;
	static int iSum = 1;
	if(iNo >= iCnt)
	{
		iSum = iSum * iCnt;
		iCnt++;
		Fact(iNo);
	}
	return iSum;

}


int main()
{
	int iValue = 0,iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = Fact(iValue);

	printf("%d",iRet);

	return 0;
}