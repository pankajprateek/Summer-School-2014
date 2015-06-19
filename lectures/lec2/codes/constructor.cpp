



#include<iostream>
using namespace std;

class item {
  int number, cost;
public:
  item(void) {
    number = 4;
      cost = 5;
  }
  int getValue(void) {
    return number * cost;
  }
};

int main() {
  item soap, pencil, pen;
  cout << soap.getValue() << endl;
  cout << pencil.getValue() << endl;
  cout << pen.getValue() << endl;
}
