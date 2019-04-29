#include <iostream>
#include "stack.h" 


int max_num=100;
Stack::Stack()
{
    top = -1;
    max_size = max_num;
    stack = (string*)malloc(max_size*sizeof(string)); 
} 
Stack::Stack(int max_stack_size)
{
  top = -1;
  max_size = max_stack_size;
  stack = (string*)malloc(max_size*sizeof(string));
}
Stack::~Stack()
{
    free(stack);
}
precedence Stack::handleOperator(){
  if(top==-1){
    return EndOfString;}
  else{
    switch (stack[top][0]) {
      case '(' : return Lparen;
      case ')' : return Rparen;
      case '+' : return Plus;
      case '-' : return Minus;
      case '/' : return Divide;
      case '*' : return Times;
      case '%' : return Mod;
      case '\0' : return EndOfString;
      default : return Operand;}}

}
void Stack::Push(string item)
{
    if(IsFullS()) 
        cout << "The stack is full" << endl;
    else
        stack[++top] = item; 
}
string Stack::Pop()
{
    if(IsEmptyS()){
        cout << "The stack is empty" << endl;
        return (string)0;
    }
    else
        return stack[top--];
}
bool Stack::IsEmptyS() const
{ return (top == -1); }

bool Stack::IsFullS() const
{ return (top == max_size-1); }

void Stack::Print() const
{ if(top==-1)
    cout << "stack is empty" << endl;
  else
    for(int i=0;i<top+1;i++)
      cout<<stack[i]<<endl;
      
} 

