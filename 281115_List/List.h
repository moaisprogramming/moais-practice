#pragma once

struct node {
	int integer;
	struct node* next;
};

typedef struct node ListNode;

ListNode* createNode(int data);

int addnode(ListNode** first, int pos, int data);
void printList(ListNode* pfirst);
ListNode* findNode(ListNode* t, int data);
void printNode(ListNode* node);