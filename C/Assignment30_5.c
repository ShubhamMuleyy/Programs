#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	newn -> data = no;
	newn -> next = NULL;

	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
}


void Display(PNODE First)
{
	printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}


int Large(iNo)
{
	int iDigit = 0;
	int LDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		if(LDigit < iDigit)
		{
			LDigit = iDigit;
		}
		iNo = iNo / 10;
	}
	return LDigit;
}


void DisplayLarge(PNODE First)
{
	int iRet = 0;
	
	while(First != NULL)
	{
		iRet = Large(First -> data);
		
		printf("%d is the Largest Number in digit\n",iRet);
		
		First = First -> next;
	}
}


int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertLast(&Head,10);
	InsertLast(&Head,120);
	InsertLast(&Head,3321);
	InsertLast(&Head,4141);
	InsertLast(&Head,6);
	InsertLast(&Head,111);

	Display(Head);

	DisplayLarge(Head);
	
	return 0;
}