#include "function.h"
#include "stack.h"

void InitializeLastOfNode(Node* header)
{
	LastOfList = header;
}

void AddChar(char ch)
{
	Node* newnode = CreateANode();
	newnode->ch = ch;

	

	LastOfList->next = newnode;
	
	
	//reset the lastoflist
	LastOfList = newnode;
}

void AddA()
{
	AddChar('s');
	AddChar('a');
	AddChar('e');
}

void AddB()
{
	AddChar('t');
	AddChar('s');
	AddChar('a');
	AddChar('e');
	AddChar('d');
	AddChar('s');
	AddChar('a');
	AddChar('e');
}

void Add(char ch)
{
	switch(ch){
		case 'A': AddA();		break;
		case 'B': AddB();		break;
		default:	AddChar(ch);
	}
}

void PrintList(Node* header)
{
	Node* tempnode = header->next;
	while(tempnode != NULL)
	{
		printf("%c",tempnode->ch);
		tempnode = tempnode->next;
	}
}




