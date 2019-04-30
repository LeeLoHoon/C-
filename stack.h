#ifndef __STACK_H__
#define __STACK_H__
#include <string>
using namespace std;

typedef struct tElement{
	string name;
	int id;
	string email;
}Element

typedef struct list_node {
Element data;
struct list_node *link;
} stack_node;

class  Stack 
{                       
  private:            
    int lenth; 
    stack_node *topNode;
  public:               
    Stack();       
    ~Stack();
    bool IsFullS () const;
    bool IsEmptyS ()  const;              
    void Push (Element  item);
    Element Pop ();
    void Print () const;
};  
#endif 
