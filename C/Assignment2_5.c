#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
	if(iNo % 2 == 0)
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
	int iValue = 0;
	bool bRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	bRet = Check(iValue);

	if(bRet == true)
	{
		printf("%d is Even number",iValue);

	}
	else
	{
		printf("%d is Odd number",iValue);
	
	}

	return 0;
}