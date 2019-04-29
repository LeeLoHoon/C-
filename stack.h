fndef __STACK_H__
#define __STACK_H__
#include <string>
using namespace std;

class  Stack  // Declares a class data type
{                       
  private:           // Private data members
    int top; 
    int max_size; 
    string *stack;
  public:               
    Stack();       
    ~Stack();
    Stack(int max_stack_size);
    bool IsFullS () const;
    bool IsEmptyS ()  const;              
    void Push (string  item);
    string Pop ();
    void Print () const;
};  
#endif 
