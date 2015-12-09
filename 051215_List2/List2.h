#pragma once
struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

typedef struct node Node;

struct list {
	Node* first;
	int size;
};

typedef struct list List;

List* create_list();
void add(List*, int n);
Node* create_node(int n);

void printList(List*);
void printNodesForward(Node*);
void printNodesBackward(Node*);
Node* findElement(List*, int);
int insert(List*, int pos, int);
int sizee(List*);
