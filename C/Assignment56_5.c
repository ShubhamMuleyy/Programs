#include<stdio.h>

int Reverse(int iNo)
{
	static int iMin = 9;
	static int iDigit = 0;
	static int iRev = 0;
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;	
		Reverse(iNo / 10);
	
	}
	return iRev;
	
}




int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Ener the number\n");
	scanf("%d",&iValue);

	iRet = Reverse(iValue);
	printf("Reverse number is : %d",iRet);
	
	return 0;
}