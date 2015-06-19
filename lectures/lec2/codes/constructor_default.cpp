#include<iostream>
using namespace std;

class item {
  int number, cost;
public:
  //  item() {}; //default
  item(int itemNum, int itemCost) : number(itemNum), cost(itemCost) {};
};

int main() {
  item pen1, pen2;
  item pencil1(123, 40), pencil2(123, 10);
}
