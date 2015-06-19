#include<iostream>
using namespace std;

class Polygon {
protected:
  int width, height;
public:
  // void setVal(int w, int h)
  //   : width(w), height(h) {}
  void setVal(int w, int h) {
    width = w;
    height = h;
  }
  virtual float area() {return 0;}
};

class Rect: public Polygon {
public:
  float area() {return width*height;};
};

class Triangle: public Polygon {
public:
  float area() {return 0.5*width*height;};
};

int main() {
  Polygon P;
  Rect R;
  Triangle T;
  
  P.setVal(4,5);
  R.setVal(4,5);
  T.setVal(4,5);

  cout<<P.area()<<endl;
  cout<<R.area()<<endl;
  cout<<T.area()<<endl;
  return 0;
}
