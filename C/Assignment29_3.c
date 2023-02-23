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


int Addition(PNODE First)
{
	int iSum = 0;

	while(First != NULL)
	{
		if((First -> data) % 2 == 0)
		{
			iSum = iSum + (First -> data);
		}
		First = First -> next;
	}
	return iSum;
}


int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertLast(&Head,11);
	InsertLast(&Head,21);
	InsertLast(&Head,51);
	InsertLast(&Head,28);
	InsertLast(&Head,10);
	InsertLast(&Head,40);

	Display(Head);

	iRet = Addition(Head);
	printf("Addition is : %d ",iRet);
	
	return 0;
}