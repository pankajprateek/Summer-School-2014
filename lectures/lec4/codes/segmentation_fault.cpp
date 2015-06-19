#include <iostream>
using namespace std;

int main() {
  int* ptr;
  int a = 2;
	
  ptr = &a;
  cout<<"A = "<<*ptr<<endl;
	
  ptr=NULL;
  cout<<"A = "<<*ptr<<endl;
  return 0;
}
