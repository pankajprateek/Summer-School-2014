#include <iostream>

using namespace std;

class base {
public :
  base() {cout<<"Base constructor.\n";}
  virtual ~base() {cout<<"Base destructor.\n";}
  virtual void func()=0;
};

class derived1 : public base {
public :
  void func() {cout<<"Func for class derived1.\n";}
  ~derived1() {cout<<"Derived1 destructor.\n";}
};

class derived2 : public base {
public :
  void func() {cout<<"Func for class derived2.\n";}
  ~derived2() {cout<<"Derived2 destructor.\n";}
};

int main() {
  base* basePtr;
  int i;
	
  cout<<"Enter an integer i.\n";
  cin>>i;
	
  if( (i*i) < 25) {
    basePtr = new derived1();
    cout<<"Object of derived1 constructed.\n";
  } else {
    basePtr = new derived2();
    cout<<"Object of derived2 constructed.\n";
  }
	
  basePtr->func();
	
  /*delete basePtr;*/
	
  basePtr = new base();
  return 0;
}
