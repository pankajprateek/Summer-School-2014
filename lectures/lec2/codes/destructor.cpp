




#include<iostream>
using namespace std;

class Temp {
  static int count;
public:
  Temp() {
    cout << "Count = "<< --count << endl;
  }
  ~Temp() {
    cout << "Count = "<< ++count << endl;
  }
};

int Temp::count = 4;

int main() {
  cout << "Main" << endl;
  Temp a, b;
  cout << "Block" << endl;
  {
    Temp c, d;
  }
  Temp x;
  cout << "Block" << endl;
  cout << "Main" << endl;
  return 0;
}
