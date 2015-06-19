#include<iostream>
using namespace std;

class Student {
  char name[200];
  int rollNo;
  char dept[20];
public:
  void setInfo(char a[], int rno, char dep[]) {
    strncpy(name, a, 200);
    strncpy(dept, dep, 20);
    rollNo = rno;
  }
  
  void PrintData();
  
};

void Student::printData() {
  using namespace std;
  cout<< "Name:" << name << endl << "Roll No:"<< rollNo <<endl << "Department:" << dept <<endl;
}

int main() {
  Student s1;
  s1.setInfo("abc1", 123, "cs");
  
  Student s2;
  s2.setInfo("abc2", 124, "ee");
  
  s1.printData();
  s2.printData();
}
