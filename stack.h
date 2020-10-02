#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include <stdlib.h>

static int LengthOfArray = 10;

static char Array[10];						//the char array
struct Node{
	char ch;
	Node* next; 
};
Node* CreateStack();			//return the header node
Node* CreateANode() ;				//return the new node
void push(Node* header,Node* newnode);		//push the new node into the stack
Node* pop(Node* header);			//pop the node and return the point





#endif

