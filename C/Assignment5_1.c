#include<stdio.h>

int MultiFact(int iNo)
{
	int iCnt = 0;
	int iMulti = 1;

	for(iCnt = 1;iCnt < iNo;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iMulti = iMulti * iCnt;			
		}
	}
	return iMulti;

}


int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = MultiFact(iValue);

	printf("%d",iRet);

	return 0;
}