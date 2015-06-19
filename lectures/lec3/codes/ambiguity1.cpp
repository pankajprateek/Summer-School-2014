#include<iostream>
using namespace std;

class A {
public:
  int temp;
};

class B : public A {
public:
  int temp;
};

int main() {
  B b1;
  B* p = &b1;
  
  p->B::temp = 1;
  p->A::temp = 2;
  b1.B::temp = 1;
  // b1.temp = 2;
}
