#include "stack.h"
#include "function.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	
	//create a linkedlist to store the result
	Node* headeroflist = CreateANode();
	InitializeLastOfNode(headeroflist);
	//initialize the char array
	{
		Array[0] = 'B';		Array[1] = '(';		Array[2] = 'e';
		Array[3] = 'h';		Array[4] = 'n';		Array[5] = 'x';
		Array[6] = 'g';		Array[7] = 'z';		Array[8] = ')';
		Array[9] = 'B';
	}
	//create a stack
	Node* headerofstack = CreateStack();
	
	//begin to solve
	for(int i=0 ; i<LengthOfArray ; i++)
	{
		if(Array[i] == '(')
		{
			//solve the '()' question		
			//push into the stack
			//find the value cita
			i++;
			char cita = Array[i];
			i++;
			while(Array[i]!=')')
			{
				Node* newnode = CreateANode();
				newnode->ch = Array[i];
				//push into the stack
				push(headerofstack,newnode);
				i++;
			}
				
				//deal with the data in the stack
			while(headerofstack->next!=NULL)
			{
				Add(cita);
				Add( pop(headerofstack)->ch );
			}
		}
		else
			Add(Array[i]);
		
		
	}
	
	PrintList(headeroflist);

	//end the program
	return 0;
}
