#include<stdio.h>


int Strlen(char *str)
{
	static int icnt = 0;
	if(*str != '\0')
	{
		icnt++;
		str++;
		Strlen(str);
	}	
	return icnt;
}


int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the string\n");
	scanf("%s",arr);
	
	iRet = Strlen(arr);

	printf("%d",iRet);

	return 0;
}