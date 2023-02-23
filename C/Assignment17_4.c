#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt = 0;
	int iCount = 0;
	int iDigit = 0;
	
	while(Arr[iCnt] > 0)
	{
		iDigit = Arr[iCnt] % 10;
		Arr[iCnt] = Arr[iCnt] / 10;
		iCnt++;
	}

	if(iCnt == 3)
	{
		printf("%d\n",Arr[iCnt]);
	}
	
}

int main()
{
	int iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	int iSize = 0;

	printf("Enter the size\n");
	scanf("%d",&iSize);

	ptr =(int *)malloc(sizeof(int) * iSize);
		
	printf("Enter the number\n");
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
		
	Display(ptr,iSize);
	
	free(ptr);
	
	return 0;
}