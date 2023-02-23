#include<stdio.h>


void Table(int iNo)
{
	int iCnt = 0;
	int iSum = 1;

	for(iCnt = 10;iCnt > 0;iCnt--)
	{		
		printf("%d\n",iNo * iCnt);
	}

}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	Table(iValue);
	

	return 0;
}