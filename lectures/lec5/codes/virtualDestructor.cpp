#include <iostream>

using namespace std;

//Base Class
class Base {
protected:
  int n;
  int * arrInt;
	
public:
  Base() { n =0; arrInt = NULL; cout<<"Default Base Constructor Call.\n";}
  Base(int num);
  void PrintBase();
  /*virtual*/ ~Base();
};

//Derived Class
class Derived : public Base {
private :
  int m;
  float* arrFloat;
public :
  Derived();
  Derived(int num1, int num2);
  void PrintDerived();
  ~Derived();
};

//Custom Base Constructor
Base::Base(int num) {
  n = num;
  arrInt = new int[n];
  for(int i=0; i<n; i++)
    arrInt[i] = i;
	
  cout<<"Custom Base Constructor Call.\n";
}

//Base Destructor
Base::~Base()
{
  if(n!=0)
    delete[] arrInt;
  cout<<"Base Destructor Call.\n";
}

//Printing Base array
void Base::PrintBase() {
  cout<<"Printing Base Array.\n";
  for(int i=0; i<n; i++) {
    cout<<"arrInt["<<i<<"] = "<<arrInt[i]<<endl;
  }
  cout<<endl;
}

//Default Derived Constructor
Derived::Derived():Base() {
  m = 0;
  arrFloat = NULL;
  cout<<"Default Derived Constructor Call.\n";
}

//Custom Derived Constructor
Derived::Derived(int num1, int num2):Base(num1) {
  m = num2;
  arrFloat = new float[m];
  for(int i=0; i<m; i++)
    arrFloat[i] = i+100.00;
  cout<<"Custom Derived Constructor Call.\n";
}

//Derived Destructor
Derived::~Derived() {
  if(m!=0)
    delete[] arrFloat;
  cout<<"Derived Destructor Call.\n";
}

//Derived Printing derived array
void Derived::PrintDerived() {
  PrintBase();
  cout<<"Printing Derived Array.\n";
  for(int i=0; i<m; i++) {
    cout<<"arrFloat["<<i<<"] = "<<arrFloat[i]<<endl;
  }
  cout<<endl;
}


int main() {
  Base* basePtr;
  basePtr = new Derived(5,10);
  basePtr->PrintBase();
  //basePtr->PrintDerived();
  delete basePtr;
	
  //memory leaks. command : gnome-system-monitor&
  for(int i=0; i<100000; i++) {
    basePtr = new Derived(200000, 2000);
    delete basePtr;
  }	
	
  int i;
  cin>>i;
	
  return 0;
}
