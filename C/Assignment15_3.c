#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	bool bFlag = false;

	for(iCnt  = 0 ;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] % iNo == 0)
		{
			bFlag = true;
			break;
		}
	}

	if(bFlag == true)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int iCnt = 0;
	bool bRet = false;
	int *ptr = NULL;
	int iSize = 0;
	int iValue = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the number you want to find\n");
	scanf("%d",&iValue);

	bRet = Check(ptr,iSize,iValue);
	if(bRet == true)
	{
		printf("The number %d is present",iValue);
	}
	else
	{
		printf("The number %d is not present",iValue);
	}
	free(ptr);
	
	return 0;

}