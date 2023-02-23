#include<stdio.h>


void Number(int iNo)
{
	if(iNo < 50)
	{
		printf("Small");
	}
	else if(50 < iNo && iNo < 100)
	{
		printf("Medium");
	}
	else if(iNo >= 100)
	{
		printf("Large");
	}

}




int main()
{
	int iValue = 0;
	
	printf("Enter the number");
	scanf("%d",&iValue);

	Number(iValue);

	return 0;
}