#ifndef __STACK_H__
#define __STACK_H__
#include <string>
using namespace std;

typedef struct tElement{
  string name;
  string id;
  string email;
}Element;
 
typedef struct list_node {
  Element data;
  struct list_node *link;
  }stack_node;
 
class Stack{
  private:
    stack_node *topNode;
  public:
    int length;
    Stack();
    void Push (Element  item);
    Element Pop ();
};
#endif
