#include<stdio.h>


void OddDisplay(int iNo)
{
	int iCnt = 0;

	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{		
		printf("%d\t",iCnt * 4);
	}

}




int main()
{
	int iValue = 0;
	
	printf("Enter the number");
	scanf("%d",&iValue);

	OddDisplay(iValue);

	return 0;
}