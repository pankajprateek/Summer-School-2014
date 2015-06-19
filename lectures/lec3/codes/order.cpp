#include <iostream>
using namespace std;

class A {
public:
  A() {
    cout << "A" << endl;
  }
  ~A() {
    cout << "Destroying A" << endl;
  }
};
 
class B: public A {
public:
  B() {
    cout << "B" << endl;
  }
  ~B() {
    cout << "Destroying B" << endl;
  }
};
 
class C: public B {
public:
  C() {
    cout << "C" << endl;
  }
  ~C() {
    cout << "Destroying C" << endl;
  }
};
 
class D: public C
{
public:
  D() {
    cout << "D" << endl;
  }
  ~D() {
    cout << "Destroying D" << endl;
  }
};

int main()
{
  cout << "Constructing A: " << endl;
  A cA;
 
  cout << "Constructing B: " << endl;
  B cB;
 
  cout << "Constructing C: " << endl;
  C cC;
 
  cout << "Constructing D: " << endl;
  D cD;
}
