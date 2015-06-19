#include<iostream>
using namespace std;

class complex {
  double re, im;
public:
  complex(double r = 0.0, double i = 0.0) : re(r), im(i) {}
  complex& operator+=(complex a) {
    cout<<"complex.operator+(complex) called"<<endl;
    re += a.re;
    im += a.im;
    return *this;
  } 

  complex& operator+=(double a) {
    cout<<"complex.operator+(double) called"<<endl;
    re += a;
    return *this;
  }

  void print() {
    cout<<re<<" "<<im<<endl;
  }
};

complex operator+(complex a, complex b) {
  cout<<"operator+(complex, complex) called"<<endl;
  complex r = a;
  return r += b;
}

complex operator+(complex a, double b) {
  cout<<"operator+(complex, double) called"<<endl;
  complex r = a;
  return r += b;
}

complex operator+(double a, complex b) {
  complex r = b;
  return r += a;
}

int main() {
  complex x(1,2);
  complex y(2,3);
  complex r1 = x+y;
  r1.print();
  complex r2 = x+2;
  r2.print();
  complex r3 = 2+x;
  r3.print();
}
