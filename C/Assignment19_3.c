#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt = 0,iCnt1 = 0;
	for(iCnt = 1;iCnt <= iRow;iCnt++)
	{
		for(iCnt1 = iCol;iCnt1 > 0;iCnt1--)
		{
			printf("%d\t",iCnt1);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter number of rows and column");
	scanf("%d %d",&iValue1,&iValue2);

	Pattern(iValue1,iValue2);

	return 0;

}