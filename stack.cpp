#include "stack.h"

Node* CreateANode()
{
	Node* tempnode = (Node*)malloc(sizeof(Node));
	tempnode->next = NULL;
	return tempnode;
}

Node* CreateStack()
{
	return CreateANode();
}

void push(Node* header,Node* newnode)
{
	newnode->next = header->next;
	header->next = newnode; 
} 
 
Node* pop(Node* header)
{
 	Node* tempnode = header->next;
	header->next =tempnode->next;
	return tempnode;
} 














