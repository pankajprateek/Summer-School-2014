#include<iostream>
using namespace std;

class X {
  double x;
public:
  X(double a) : x(a) {}
  double operator+(int n) {
    cout<<"X.operator+("<<n<<") called"<<endl;
    return x + n;
  }

  friend double operator+(X,X);
  friend double operator+(X,double);
};

double operator+(X x1, X x2) {
  cout<<"operator+(X("<<x1.x<<"), X) called"<<endl;
  return x1.x+x2.x;
}

double operator+(X x1, double d) {
  cout<<"operator+(X,"<<d<<") called"<<endl;
  return x1.x + d;
}

int main() {
  X a(3);
  cout<<a+1<<endl;
  cout<<1+a<<endl;
  cout<<a+1.0<<endl;
}
