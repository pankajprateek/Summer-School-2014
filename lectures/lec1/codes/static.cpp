#include<iostream>
#include<string>
using namespace std;

class Employee {
  string name;
  int age;
  // Other Employee Details
public:
  static int EmpNumber;
  
  Employee() {   // Constructor
    EmpNumber++;
  }
  // Other Fucntions
};

int Employee::EmpNumber = 0;

int main() {
  cout << Employee::EmpNumber << endl;
  Employee e1;
  cout << e1.EmpNumber << endl;
  Employee e2;
  cout << e1.EmpNumber << endl;
  Employee e3;
  cout << e3.EmpNumber << endl;
}
