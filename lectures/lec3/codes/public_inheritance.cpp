#include<iostream>
using namespace std;

class c1 {
private:
  int n;
public:
  void setn1(int num) {
    n = num;
  }
  int getn1(void) {
    return n;
  }
};

class c2: public c1 {
private:
  int n1;
public:
  void setn2(int num) {
    n1 = num;
  }
  int getn2(void) {
    return n1;
  }
  int sum(void) {
    return getn1()+n1;
  }
};

int main() {
  c2 obj1;
  obj1.setn1(4);
}
