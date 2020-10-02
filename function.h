#ifndef _FUNCTION_H
#define _FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
static Node* LastOfList;			//the last of the list
void InitializeLastOfNode(Node* header);
void AddA();			//add 'sae' as A in the last of the lsit
void AddB();			//add''tsaedsae' as B in the last of the list
void AddChar(char ch);	//add ch to the alst of the list
void Add(char ch);		//add char which controled by ch
void PrintList(Node* header);	//print the lsit

#endif 
