#include<stdio.h>


int Difference(char *str)
{
	int iCnt = 0,iCnt1 = 0,iSum= 0;

	while(*str != '\0')
	{
		if(*str >= 'A' && *str <='Z')
		{
			iCnt++;
		}
		else
		{
			iCnt--;
		}
		str++;
	}
	return (iSum = iCnt - iCnt1) ;
}





int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);

	iRet = Difference(arr);

	printf("%d",iRet);

	return 0;
}