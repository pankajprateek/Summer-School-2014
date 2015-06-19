#include<iostream>
using namespace std;

class Fraction{
  int n, d;
public:
  Fraction() {
    n = 0; d = 1;
    cout<<"Fraction created with value" << n << "/" << d <<endl;
  }
  
  Fraction(int numerator, int denominator = 1) {
    n = numerator; d = denominator;
    cout<<"Fraction created with value" << n << "/" << d <<endl;
  }

  // Fraction(int numerator = 0, int denominator = 1) {
  //   n = numerator; d = denominator;
  //   cout<<"Fraction created with value" << n << "/" << d <<endl;
  // }

  ~Fraction() {
    cout << "Destructor called for fraction with value " << n << "/" << d <<endl;
  }
};

int main() {
  Fraction f1;
  Fraction f2(6);
  {
    Fraction f3(2,3);
  }
}
