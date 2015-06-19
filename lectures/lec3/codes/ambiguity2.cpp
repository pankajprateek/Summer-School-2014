#include<iostream>
using namespace std;

class A {
public:
  int temp;
};

class B {
public:
  int temp;
};

class C : public A, public B {
public:
  int name;
};

int main() {
  C obj1;
  C* p = &obj1;

  p->name = 1;
  p->B::temp = 10;
  p->A::temp = 15;
  p->temp = 1;   //error
  // error is shown only if the ambiguous 
  // element is used
}
