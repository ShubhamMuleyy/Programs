#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iValue)
{
	int iCnt = 0;
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == iValue)
		{
			break;
		}
	}
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
		
}

int main()
{
	int iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	int iSize = 0;
	int iNo = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the number you want to find\n");
	scanf("%d",&iNo);
		
	iRet = FirstOcc(ptr,iSize,iNo);
	
	if(iRet == -1)
	{
		printf("There is no number in the array\n");
	}
	else
	{
		printf("There is %d in the array\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}