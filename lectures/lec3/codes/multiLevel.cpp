#include<iostream>
using namespace std;

//base class
class grandFather {
public:
  int wealth;
  int property;
  grandFather() {wealth = 100; property = 100;}
};

//intermediate base class
class father : public grandFather {
public:
  int cash;
  int cars;
  father() {cash = 1000; cars = 10;}
};

//derived class
class child : public father {
public:
  int mobile;
  int laptop;
  child(){mobile = 10; laptop = 5;}
};


int main() {
  child Tom;

  cout<<"Inherited wealth from grand father= "<<Tom.wealth<<endl;
  cout<<"Inherited property from grand father= "<<Tom.property<<endl;
  cout<<"Inherited cash from father= "<<Tom.cash<<endl;
  cout<<"Inherited cars from father= "<<Tom.cars<<endl;
  cout<<"Owned mobiles = "<<Tom.mobile<<endl;
  cout<<"Owned Laptops = "<<Tom.laptop<<endl;
  return 0;
}
