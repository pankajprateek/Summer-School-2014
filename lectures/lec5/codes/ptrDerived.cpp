#include <iostream>
using namespace std;

class baseClass {
private :
  int pvtInt;
public :
  int pubInt;
  baseClass() { pvtInt = 10; pubInt = 15; }
  int getInt() { return pvtInt;}
};


class derivedClass : public baseClass {
private :
  int varPvt;
public :
  int varPub;
  derivedClass() { varPvt = 100; varPub = 150; }
  int getInt() { return varPvt;}
};


int main() {
  baseClass b;
  derivedClass d;
	
  baseClass* ptr = &b;
  cout<<"Pointing to base class currently.\n Evidence : "<< ptr->getInt()<<endl;
	
  ptr = &d;
  cout<<"Pointing to derived class currently, but able to access only derived members.\n Evidence : "<< ptr->pubInt<<endl;
  //cout<<"Pointing to derived class currently, but able to access only derived members.\n Evidence : "<< ptr->pvtInt<<endl;
  //cout<<"Pointing to derived class currently, but able to access only derived members.\n Evidence : "<< ptr->varPub<<endl;		
  return 0;
}
