
#include<stdio.h>

void DisplayASCII()
{
	int i = 0;
	for(i = 0;i <= 127;i++)
	{
		printf("%c \t %d \t %o \t %x ",i,i,i,i);
	}

}



int main()
{
	DisplayASCII();

	return 0;
}