#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
	printf("%c \t %d \t %o \t %x",ch,ch,ch,ch);
		
}



int main()
{
	char cValue = '\0';
	
	printf("Enter the charcter\n");
	scanf("%c",&cValue);

	Display(cValue);

	return 0;
}