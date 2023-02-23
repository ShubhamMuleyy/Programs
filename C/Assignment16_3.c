#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;

	for(iCnt = iLength -1;iLength >= 0;iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == -1)
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

	iRet = LastOcc(ptr,iSize,iValue);

	if(iRet == -1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("The last occurances is %d ",iRet);
	}

	



}