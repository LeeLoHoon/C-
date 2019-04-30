#include <iostream>
#include "stack.h" 

Stack::Stack()
{
	lenth=0;
   topNode = NULL;
} 

void Stack::Push(Element item)
{
	stack_node *new_node = new stack_node;
	if(new_node == NULL)
		return;
	new_node->data =item;
	new_node->link = topNode;
	topNode = new_node;
}
Element Stack::Pop()
{	Element e;
	stack_node *del;
	if(topNode == NULL)
		return (Element)0;
	e=topNode->data;
	del = topNode;
	topNode = topNode ->link;
	delete del;
	return e;
} 
