#include<stdio.h>
#include<stdlib.h>


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

int Perfect(int ino)
{
	int i = 0,Sum = 0;
	for(i = 1;i < (ino/2 + 1);i++)
	{
		if(ino % i == 0)
		{
			Sum = Sum + i;
		}
	}
	return Sum;

}

void DisplayPerfect(PNODE First)
{
	int iRet = 0;

	while(First != NULL)
	{
		iRet = Perfect(First -> data);
		if(iRet == First -> data)
		{
			printf("%d is a perfect number\n",iRet);
		}
		First = First -> next;
	}
}


int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertLast(&Head,11);
	InsertLast(&Head,21);
	InsertLast(&Head,51);
	InsertLast(&Head,28);

	Display(Head);

	DisplayPerfect(Head);
	
	return 0;
}