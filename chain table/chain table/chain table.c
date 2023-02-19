#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"node.h"


//Divide a space into two spaces where have one data and one pointer. 
//The pointer continuously points to the next one until the last one, and the last one points to the address head of the first one
typedef struct _list {
	Node* head;

}List;
int add(List* Plist, int number);
void print(List* plist);

int main()
{
	int head;
	List list;
	int number;
	
	list.head = NULL;
	do {
		scanf("%d", &number);
		if (number != -1)
		{
			head = add(&list, number);
		}
		} while (number != -1);
		print(&list);
		scanf("%d", &number);
		Node* p;
		int isFound = 0;
		for (p = list.head; p; p->next)
		{
			if (p->value==number)
			{
				printf("找到了\n");
				isFound = 1;
				break;
			}
		}
		if (isFound==0)
		{
			printf("没找到\n");
		}
		Node* q;
		for (q=NULL,p = list.head; p;q=p, p->next)
		{
			if (p->value == number)
			{
				printf("找到了\n");
				if (q) {
					q->next = p->next;
				}
				else
				{
					list.head = p->next;
				}
				free(p);
				break;
			}
		}
		for (p = head; p; p = q)
		{
			q = p->next;
			free(p);
		}
		return 0;
	}


int add(List* Plist, int number)
{
	// add to Linked-list
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//find the last 
	//attach
	Node* last = Plist->head;
	if (last)
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = p;
	}
	else
	{
		Plist->head = p;
	}
}

void print(List* plist)
{
	Node* p;
	for (p = plist->head; p; p = p->next)
	{
		printf("%d\t", p->value);

	}
	printf("\n");
}
