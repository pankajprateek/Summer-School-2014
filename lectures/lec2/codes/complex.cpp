



#include<iostream>
using namespace std;

class complex{
  //public:
  double re, im;
public:
  complex(double r = 0, double i = 0) : re(r),im(i) {}
};

int main() {
  // With Constructor
   complex b = 3;

  // Work when constructor not defined and stuff public
  // complex c1 = {3};
  // complex c2 = {3, 4};
  // complex c3 = {3,4,5};
}
