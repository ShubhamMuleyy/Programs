#include<stdio.h>

void MultiFact(int iNo)
{
	int iCnt = 0;
	int iMulti = 1;

	for(iCnt = iNo/2;iCnt > 0 ;iCnt--)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}

}


int main()
{
	int iValue = 0;

   	printf("Enter the number\n");
	scanf("%d",&iValue);

	MultiFact(iValue);

	return 0;
}