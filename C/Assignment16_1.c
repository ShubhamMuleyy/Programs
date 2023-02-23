#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iValue)
{
	int iCnt = 0;
	bool bFlag = false;
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == iValue)
		{
			bFlag = true;
		}
	}
	if(bFlag == true)
	{
		return bFlag;
	}
	else
	{
		return bFlag;
	}
}

int main()
{
	int iCnt = 0;
	int iSize = 0;
	int iNo = 0;
	int *ptr = NULL;
	bool bRet = false;

	printf("Enter the size of array\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(sizeof(int) * iSize);

	printf("Enter the number of array\n");

	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d\n",&ptr[iCnt]);
	}

	printf("Enter the number :\n");
	scanf("%d\n",&iNo);
		

	bRet = Check(ptr,iSize,iNo);

	if(bRet == true)
	{
		printf("%d number is present",iNo);
	}

	else
	{
		printf("%d number is not present",iNo);
	}
	
	free(ptr);
	
	return 0;
}