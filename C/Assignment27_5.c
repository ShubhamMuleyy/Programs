#include<stdio.h>
#include<stdbool.h>

void StrRevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp = '\0';
	
	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(start < end)
	{
		temp = *start;	
		*start = *end;
		*end = temp;

		start++;
		end--;
		
	}

	
}


int main()
{
	char arr[20];

	printf("ENter the string\n");
	scanf("%[^'\n']s",arr);

	StrRevX(arr);

	printf("Reverse atring is :%s\n",arr);

	return 0;

	



	return 0;
}