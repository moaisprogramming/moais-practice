#include "list2.h"
#include <stdio.h>

List* create_list()
{
	List* list = (List*)malloc(sizeof(List));
	list->size = 0;
	list->first = NULL;
	return list;
}

Node* create_node(int n)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return new_node;
};

void add(List* list, int n)
{
	Node *cur = list->first, *new_node;
	if (list == NULL) {
		printf("Error");
		return;
	}
	if (list->first == NULL)
	{
		list->first = create_node(n);
		list->size++;
		return;
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	new_node = create_node(n);
	cur->next = new_node;
	new_node->prev = cur;
	list->size++;
}

void printList(List* lst)
{
	printNodesForward(lst->first);
}
void printNodesForward(Node* lst)
{
	while (lst != NULL)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}
void printNodesBackward(Node* lst)
{
	while (lst != NULL)
	{
		printf("%d ", lst->data);
		lst = lst->prev;
	}
	printf("\n");
}
Node* findElement(List* lst, int n)
{
	Node* next = lst->first;
	while (next != NULL)
	{
		if (next->data == n)
		{
			return next;
		}
		next = next->next;
	}
	return NULL;
}
int insert(List* list, int pos, int a)
{
	Node* new_node;
	Node* curr;
	Node* curr_next;
	int s;
	curr = list->first;
	s = 0;
	if (pos == 0)
	{
		new_node = create_node(a);
		list->first = new_node;
		new_node->next = curr;
		curr->prev =new_node;
		list->size++;
		return 1;
	}
	while (s < pos - 1)
	{
		if (curr->next != NULL)
		{
			s++;
			curr = curr->next;
					}
		else
		{
			return 0;
		
		}
	}
	new_node = create_node(a);
	curr_next = curr->next;
	if (curr_next != NULL)
	{
		curr_next->prev = new_node;
		new_node->next = curr_next;
	}	
	new_node->prev = curr;
	curr->next = new_node;
	new_node->next = curr_next;
	list->size++;
	return 1;
}
int sizee(List* LT)
{
	
	Node* curr;
	int s;
	s = 0;
	curr = LT->first;
	while (curr != NULL)
	{
		curr = curr->next;
		s++;
	}
	if (s != LT->size)
	{
		printf("You Have a Problem");
	}
	return s;
}
