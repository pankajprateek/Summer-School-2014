



#include<iostream>
using namespace std;

class item {
  int number, cost;
public:
  // item() {}; //default
  item(int itemNum=0, int itemCost) {
    number=itemNum; cost=itemCost;
      }
  void print() {
    cout<<number * cost <<endl;
  }
};

void temp(item& p) {
  cout<<p.number;
}

int main() {
  item pen1, pen2;
  item pencil1(123, 40), pencil2(123, 10);

  pen1.print();
  pen2.print();
  pencil1.print();
  pencil2.print();
}
