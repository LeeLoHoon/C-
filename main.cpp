#include "stack.h" 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Stack stack1;
    ifstream fp;
    string fileName, longString, splitElement[3];
    try{
      cin >> fileName;
      fp.open(fileName);
    }catch(const ifstream::failure& e){
   		 cerr << "Exception occurred while opening the file." << endl;}
    //fp가 끝날때까지 돌림
    getline(fp, longString);
    //longString이 끝날때 까지 돌림.
    while()
    //splitElement를 파라미터로 push.
    push
    //pop하면 Element를 거꾸로 print하기.
  return 0;
}
