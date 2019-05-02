#include <iostream>
#include "stack.h"
  
Stack::Stack(){
  length=0;
  topNode = NULL;
}

void Stack::Push(Element item){
  stack_node *new_node = new stack_node;
  new_node->data =item;
  new_node->link = topNode;
  topNode = new_node;
  length++;
}

Element Stack::Pop(){  
  Element e;
  stack_node *del;
  if(topNode == NULL)
    return e;
  e=topNode->data;
  del = topNode;
  topNode = topNode ->link;
  delete del;
  cout<<e.id<<", "<<e.name<<", "<<e.email<<endl;
  return e;
 }
